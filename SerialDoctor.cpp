#include "SerialDoctor.hpp"
#include "ui_SerialDoctorDialog.h"

SerialDoctor::SerialDoctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialDoctor)
{
    ui->setupUi(this);

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
}

SerialDoctor::~SerialDoctor()
{
    delete ui;
}

void SerialDoctor::on_OpenConnectionPushButton_clicked(void)
{
	qDebug() << "Push pressed";
}

void SerialDoctor::on_RefreshScanPushButton_clicked(void)
{
	ui->ReturnScanTextEdit->setPlainText(SerialPort->scan());
}

void SerialDoctor::on_SendCommandPushButton_clicked(void)
{
}
