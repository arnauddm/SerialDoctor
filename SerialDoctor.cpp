#include "SerialDoctor.hpp"
#include "ui_SerialDoctorDialog.h"

SerialDoctor::SerialDoctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialDoctor)
{
    ui->setupUi(this);
	
	_SerialPort = new Serial;
	
	QObject::connect(ui->BaudRateComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(baudRate_Changed(QString)));
	QObject::connect(ui->ParityComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(parity_Changed(QString)));
	QObject::connect(ui->FlowControlComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(flowControl_Changed(QString)));
	QObject::connect(ui->StopBitsComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(stopBits_Changed(QString)));
	QObject::connect(ui->DataBitsComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(dataBits_Changed(QString)));
	QObject::connect(_SerialPort, SIGNAL(ReceiveData(QString)), this, SLOT(dataReceived(QString)));
	QObject::connect(this, SIGNAL(stateChanged(void)), this, SLOT(updateState(void)));

	// Init parameters lists
	_slBaudRate 				<<
		"Unknown"			<<
		"1200"				<<
		"2400"				<<
		"4800"				<<
		"9600"				<<
		"19200"				<<
		"38400"				<<
		"57600"				<<
		"115200"			;

	_slDataBits				<<
		"Unknown"			<<
		"5"					<<
		"6"					<<
		"7"					<<
		"8"					;

	_slParity				<<
		"Unknown"			<<
		"No Parity"			<<
		"Even Parity"		<<
		"Odd Parity"		<<
		"Space Parity"		<<
		"Mark Parity"		;

	_slFlowControl			<<
		"Unknown"			<<
		"No Control"		<<
		"Harware Control"	<<
		"Software Control"	;

	_slMode					<<
		"Not Open"			<<
		"Read Only"			<<
		"Write Only"		<<
		"Read Write"		<<
		"Append"			<<
		"Truncate"			<<
		"Text"				<<
		"Unbuffered"		;

	_slStopBits				<<
		"Unknown"			<<
		"One Stop"			<<
		"One And Half Stop"	<<
		"Two Stop"			;

	_mBaudRate.insert(_slBaudRate[0], Serial::BaudRate::UnknownBaudRate);
	_mBaudRate.insert(_slBaudRate[1], Serial::BaudRate::Baud1200);
	_mBaudRate.insert(_slBaudRate[2], Serial::BaudRate::Baud2400);
	_mBaudRate.insert(_slBaudRate[3], Serial::BaudRate::Baud4800);
	_mBaudRate.insert(_slBaudRate[4], Serial::BaudRate::Baud9600);
	_mBaudRate.insert(_slBaudRate[5], Serial::BaudRate::Baud19200);
	_mBaudRate.insert(_slBaudRate[6], Serial::BaudRate::Baud38400);
	_mBaudRate.insert(_slBaudRate[7], Serial::BaudRate::Baud57600);
	_mBaudRate.insert(_slBaudRate[8], Serial::BaudRate::Baud115200);

	_mDataBits.insert(_slDataBits[0], Serial::DataBits::UnknownDataBits);
	_mDataBits.insert(_slDataBits[1], Serial::DataBits::Data5);
	_mDataBits.insert(_slDataBits[2], Serial::DataBits::Data6);
	_mDataBits.insert(_slDataBits[3], Serial::DataBits::Data7);
	_mDataBits.insert(_slDataBits[4], Serial::DataBits::Data8);

	_mParity.insert(_slParity[0], Serial::Parity::UnknownParity);
	_mParity.insert(_slParity[1], Serial::Parity::NoParity);
	_mParity.insert(_slParity[2], Serial::Parity::EvenParity);
	_mParity.insert(_slParity[3], Serial::Parity::OddParity);
	_mParity.insert(_slParity[4], Serial::Parity::SpaceParity);
	_mParity.insert(_slParity[5], Serial::Parity::MarkParity);

	_mStopBits.insert(_slStopBits[0], Serial::StopBits::UnknownStopBits);
	_mStopBits.insert(_slStopBits[1], Serial::StopBits::OneStop);
	_mStopBits.insert(_slStopBits[2], Serial::StopBits::OneAndHalfStop);
	_mStopBits.insert(_slStopBits[3], Serial::StopBits::TwoStop);

	_mFlowControl.insert(_slFlowControl[0], Serial::FlowControl::UnknownFlowControl);
	_mFlowControl.insert(_slFlowControl[1], Serial::FlowControl::NoFlowControl);
	_mFlowControl.insert(_slFlowControl[2], Serial::FlowControl::HardwareControl);
	_mFlowControl.insert(_slFlowControl[3], Serial::FlowControl::SoftwareControl);

	_mMode.insert(_slMode[0], Serial::Mode::NotOpen);
	_mMode.insert(_slMode[1], Serial::Mode::ReadOnly);
	_mMode.insert(_slMode[2], Serial::Mode::WriteOnly);
	_mMode.insert(_slMode[3], Serial::Mode::ReadWrite);
	_mMode.insert(_slMode[4], Serial::Mode::Append);
	_mMode.insert(_slMode[5], Serial::Mode::Truncate);
	_mMode.insert(_slMode[6], Serial::Mode::Text);
	_mMode.insert(_slMode[7], Serial::Mode::Unbuffered);

	// Init GUI's items
	ui->ReturnScanTextEdit->setReadOnly(true);
	ui->OutputTextEdit->setReadOnly(true);
	ui->DataBitsComboBox->addItems(_slDataBits);
	ui->StopBitsComboBox->addItems(_slStopBits);
	ui->FlowControlComboBox->addItems(_slFlowControl);
	ui->BaudRateComboBox->addItems(_slBaudRate);
	ui->ParityComboBox->addItems(_slParity);
	ui->ModeComboBox->addItems(_slMode);

	ui->OutputTextEdit->clear();
	emit stateChanged();
}

SerialDoctor::~SerialDoctor()
{
    delete ui;
}

void SerialDoctor::on_OpenConnectionPushButton_clicked(void)
{
	if(_SerialPort->isOpen())
	{
		_SerialPort->close();
	}
	else
	{
		QMap<QString, Serial::Mode>::iterator it = _mMode.find(ui->ModeComboBox->currentText());
		_SerialPort->setPortName(ui->PortNameLineEdit->text());
		if(_SerialPort->open(it.value()) == Serial::Error::NoError)
			ui->OutputTextEdit->append("Successful to open Serial Port");
		else
			ui->OutputTextEdit->append("Failed to open Serial Port");
	}
	
	emit stateChanged();
}

void SerialDoctor::on_RefreshScanPushButton_clicked(void)
{
	ui->ReturnScanTextEdit->setPlainText(_SerialPort->scan());
}

void SerialDoctor::on_SendCommandPushButton_clicked(void)
{
	QMap<QString, Serial::Mode>::iterator it = _mMode.find(ui->ModeComboBox->currentText());
	_SerialPort->open(it.value());

	emit stateChanged();
}

void SerialDoctor::baudRate_Changed(QString text)
{
	QMap<QString, Serial::BaudRate>::iterator it = _mBaudRate.find(text);
	if(_SerialPort->setBaudRate(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Baud Rate change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Baud Rate to " + text);
}

void SerialDoctor::parity_Changed(QString text)
{
	QMap<QString, Serial::Parity>::iterator it = _mParity.find(text);
	if(_SerialPort->setParity(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Parity change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Parity to " + text);
}

void SerialDoctor::flowControl_Changed(QString text)
{
	QMap<QString, Serial::FlowControl>::iterator it = _mFlowControl.find(text);
	if(_SerialPort->setFlowControl(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Flow Control change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Flow Control to " + text);
}

void SerialDoctor::stopBits_Changed(QString text)
{
	QMap<QString, Serial::StopBits>::iterator it = _mStopBits.find(text);
	if(_SerialPort->setStopBits(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Stop Bits change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Stop Bits to " + text);
}

void SerialDoctor::dataBits_Changed(QString text)
{
	QMap<QString, Serial::DataBits>::iterator it = _mDataBits.find(text);
	if(_SerialPort->setDataBits(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Data Bits change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Data Bits to " + text);
}

void SerialDoctor::dataReceived(QString text)
{
	ui->OutputTextEdit->append("New data :\n" + text);
}

void SerialDoctor::updateState(void)
{
	qDebug() << "Update";
	bool bDisable = _SerialPort->isOpen();
	
	ui->BaudRateComboBox->setDisabled(bDisable);
	ui->ParityComboBox->setDisabled(bDisable);
	ui->FlowControlComboBox->setDisabled(bDisable);
	ui->StopBitsComboBox->setDisabled(bDisable);
	ui->DataBitsComboBox->setDisabled(bDisable);
	ui->ModeComboBox->setDisabled(bDisable);
	ui->PortNameLineEdit->setDisabled(bDisable);

	ui->SendCommandPushButton->setDisabled(!bDisable);
	ui->CommandlineEdit->setDisabled(!bDisable);

	if(bDisable)
		ui->OpenConnectionPushButton->setText("Close");
	else
		ui->OpenConnectionPushButton->setText("Open");
}
