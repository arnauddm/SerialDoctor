#include "SerialDoctor.hpp"
#include "ui_SerialDoctorDialog.h"

SerialDoctor::SerialDoctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialDoctor)
{
    ui->setupUi(this);
	
	SerialPort = new Serial;
	
	QObject::connect(ui->BaudRateComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(BaudRate_Changed(QString)));

	QObject::connect(ui->ParityComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(Parity_Changed(QString)));
	
	QObject::connect(ui->FlowControlComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(FlowControl_Changed(QString)));
	
	QObject::connect(ui->StopBitsComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(StopBits_Changed(QString)));

	QObject::connect(ui->DataBitsComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(DataBits_Changed(QString)));

	QObject::connect(SerialPort, SIGNAL(ReceiveData(QString)), this, SLOT(DataReceived(QString)));

	// Init parameters lists
	slBaudRate 				<<
		"Unknown"			<<
		"1200"				<<
		"2400"				<<
		"4800"				<<
		"9600"				<<
		"19200"				<<
		"38400"				<<
		"57600"				<<
		"115200"			;

	slDataBits				<<
		"Unknown"			<<
		"5"					<<
		"6"					<<
		"7"					<<
		"8"					;


	slParity				<<
		"Unknown"			<<
		"No Parity"			<<
		"Even Parity"		<<
		"Odd Parity"		<<
		"Space Parity"		<<
		"Mark Parity"		;

	slFlowControl			<<
		"Unknown"			<<
		"No Control"		<<
		"Harware Control"	<<
		"Software Control"	;

	slMode					<<
		"Not Open"			<<
		"Read Only"			<<
		"Write Only"		<<
		"Read Write"		<<
		"Append"			<<
		"Truncate"			<<
		"Text"				<<
		"Unbuffered"		;

	slStopBits				<<
		"Unknown"			<<
		"One Stop"			<<
		"One And Half Stop"	<<
		"Two Stop"			;

	mBaudRate.insert(slBaudRate[0], Serial::BaudRate::UnknownBaudRate);
	mBaudRate.insert(slBaudRate[1], Serial::BaudRate::Baud1200);
	mBaudRate.insert(slBaudRate[2], Serial::BaudRate::Baud2400);
	mBaudRate.insert(slBaudRate[3], Serial::BaudRate::Baud4800);
	mBaudRate.insert(slBaudRate[4], Serial::BaudRate::Baud9600);
	mBaudRate.insert(slBaudRate[5], Serial::BaudRate::Baud19200);
	mBaudRate.insert(slBaudRate[6], Serial::BaudRate::Baud38400);
	mBaudRate.insert(slBaudRate[7], Serial::BaudRate::Baud57600);
	mBaudRate.insert(slBaudRate[8], Serial::BaudRate::Baud115200);

	mDataBits.insert(slDataBits[0], Serial::DataBits::UnknownDataBits);
	mDataBits.insert(slDataBits[1], Serial::DataBits::Data5);
	mDataBits.insert(slDataBits[2], Serial::DataBits::Data6);
	mDataBits.insert(slDataBits[3], Serial::DataBits::Data7);
	mDataBits.insert(slDataBits[4], Serial::DataBits::Data8);

	mParity.insert(slParity[0], Serial::Parity::UnknownParity);
	mParity.insert(slParity[1], Serial::Parity::NoParity);
	mParity.insert(slParity[2], Serial::Parity::EvenParity);
	mParity.insert(slParity[3], Serial::Parity::OddParity);
	mParity.insert(slParity[4], Serial::Parity::SpaceParity);
	mParity.insert(slParity[5], Serial::Parity::MarkParity);

	mStopBits.insert(slStopBits[0], Serial::StopBits::UnknownStopBits);
	mStopBits.insert(slStopBits[1], Serial::StopBits::OneStop);
	mStopBits.insert(slStopBits[2], Serial::StopBits::OneAndHalfStop);
	mStopBits.insert(slStopBits[3], Serial::StopBits::TwoStop);

	mFlowControl.insert(slFlowControl[0], Serial::FlowControl::UnknownFlowControl);
	mFlowControl.insert(slFlowControl[1], Serial::FlowControl::NoFlowControl);
	mFlowControl.insert(slFlowControl[2], Serial::FlowControl::HardwareControl);
	mFlowControl.insert(slFlowControl[3], Serial::FlowControl::SoftwareControl);

	mMode.insert(slMode[0], Serial::Mode::NotOpen);
	mMode.insert(slMode[1], Serial::Mode::ReadOnly);
	mMode.insert(slMode[2], Serial::Mode::WriteOnly);
	mMode.insert(slMode[3], Serial::Mode::ReadWrite);
	mMode.insert(slMode[4], Serial::Mode::Append);
	mMode.insert(slMode[5], Serial::Mode::Truncate);
	mMode.insert(slMode[6], Serial::Mode::Text);
	mMode.insert(slMode[7], Serial::Mode::Unbuffered);

	// Init GUI's items
	ui->ReturnScanTextEdit->setReadOnly(true);
	ui->OutputTextEdit->setReadOnly(true);
	ui->DataBitsComboBox->addItems(slDataBits);
	ui->StopBitsComboBox->addItems(slStopBits);
	ui->FlowControlComboBox->addItems(slFlowControl);
	ui->BaudRateComboBox->addItems(slBaudRate);
	ui->ParityComboBox->addItems(slParity);
	ui->ModeComboBox->addItems(slMode);

	ui->OutputTextEdit->clear();
}

SerialDoctor::~SerialDoctor()
{
    delete ui;
}

void SerialDoctor::on_OpenConnectionPushButton_clicked(void)
{
	qDebug() << "Pushed";
}

void SerialDoctor::on_RefreshScanPushButton_clicked(void)
{
	ui->ReturnScanTextEdit->setPlainText(SerialPort->scan());
}

void SerialDoctor::on_SendCommandPushButton_clicked(void)
{
	QMap<QString, Serial::Mode>::iterator it = mMode.find(ui->ModeComboBox->currentText());
	SerialPort->open(it.value());
}

void SerialDoctor::BaudRate_Changed(QString text)
{
	QMap<QString, Serial::BaudRate>::iterator it = mBaudRate.find(text);
	if(SerialPort->setBaudRate(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Baud Rate change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Baud Rate to " + text);
}

void SerialDoctor::Parity_Changed(QString text)
{
	QMap<QString, Serial::Parity>::iterator it = mParity.find(text);
	if(SerialPort->setParity(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Parity change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Parity to " + text);
}

void SerialDoctor::FlowControl_Changed(QString text)
{
	QMap<QString, Serial::FlowControl>::iterator it = mFlowControl.find(text);
	if(SerialPort->setFlowControl(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Flow Control change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Flow Control to " + text);
}

void SerialDoctor::StopBits_Changed(QString text)
{
	QMap<QString, Serial::StopBits>::iterator it = mStopBits.find(text);
	if(SerialPort->setStopBits(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Stop Bits change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Stop Bits to " + text);
}

void SerialDoctor::DataBits_Changed(QString text)
{
	QMap<QString, Serial::DataBits>::iterator it = mDataBits.find(text);
	if(SerialPort->setDataBits(it.value()) == Serial::Error::NoError)
		ui->OutputTextEdit->append("Successful Data Bits change to " + text);
	else
		ui->OutputTextEdit->append("Failure to change the Data Bits to " + text);
}

void SerialDoctor::DataReceived(QString text)
{
	ui->OutputTextEdit->append("New data :\n" + text);
}
