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

	lBaudRate.append(qMakePair(slBaudRate[0], Serial::BaudRate::UnknownBaudRate));
	lBaudRate.append(qMakePair(slBaudRate[1], Serial::BaudRate::Baud1200));
	lBaudRate.append(qMakePair(slBaudRate[2], Serial::BaudRate::Baud2400));
	lBaudRate.append(qMakePair(slBaudRate[3], Serial::BaudRate::Baud4800));
	lBaudRate.append(qMakePair(slBaudRate[4], Serial::BaudRate::Baud9600));
	lBaudRate.append(qMakePair(slBaudRate[5], Serial::BaudRate::Baud19200));
	lBaudRate.append(qMakePair(slBaudRate[6], Serial::BaudRate::Baud38400));
	lBaudRate.append(qMakePair(slBaudRate[7], Serial::BaudRate::Baud57600));
	lBaudRate.append(qMakePair(slBaudRate[8], Serial::BaudRate::Baud115200));

	lDataBits.append(qMakePair(slDataBits[0], Serial::DataBits::UnknownDataBits));
	lDataBits.append(qMakePair(slDataBits[1], Serial::DataBits::Data5));
	lDataBits.append(qMakePair(slDataBits[2], Serial::DataBits::Data6));
	lDataBits.append(qMakePair(slDataBits[3], Serial::DataBits::Data7));
	lDataBits.append(qMakePair(slDataBits[4], Serial::DataBits::Data8));

	lParity.append(qMakePair(slParity[0], Serial::Parity::UnknownParity));
	lParity.append(qMakePair(slParity[1], Serial::Parity::NoParity));
	lParity.append(qMakePair(slParity[2], Serial::Parity::EvenParity));
	lParity.append(qMakePair(slParity[3], Serial::Parity::OddParity));
	lParity.append(qMakePair(slParity[4], Serial::Parity::SpaceParity));
	lParity.append(qMakePair(slParity[5], Serial::Parity::MarkParity));

	lStopBits.append(qMakePair(slStopBits[0], Serial::StopBits::UnknownStopBits));
	lStopBits.append(qMakePair(slStopBits[1], Serial::StopBits::OneStop));
	lStopBits.append(qMakePair(slStopBits[2], Serial::StopBits::OneAndHalfStop));
	lStopBits.append(qMakePair(slStopBits[3], Serial::StopBits::TwoStop));

	lFlowControl.append(qMakePair(slFlowControl[0], Serial::FlowControl::UnknownFlowControl));
	lFlowControl.append(qMakePair(slFlowControl[1], Serial::FlowControl::NoFlowControl));
	lFlowControl.append(qMakePair(slFlowControl[2], Serial::FlowControl::HardwareControl));
	lFlowControl.append(qMakePair(slFlowControl[3], Serial::FlowControl::SoftwareControl));

	lMode.append(qMakePair(slMode[0], Serial::Mode::NotOpen));
	lMode.append(qMakePair(slMode[1], Serial::Mode::ReadOnly));
	lMode.append(qMakePair(slMode[2], Serial::Mode::WriteOnly));
	lMode.append(qMakePair(slMode[3], Serial::Mode::ReadWrite));
	lMode.append(qMakePair(slMode[4], Serial::Mode::Append));
	lMode.append(qMakePair(slMode[5], Serial::Mode::Truncate));
	lMode.append(qMakePair(slMode[6], Serial::Mode::Text));
	lMode.append(qMakePair(slMode[7], Serial::Mode::Unbuffered));

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
}

void SerialDoctor::on_SendCommandPushButton_clicked(void)
{
}
