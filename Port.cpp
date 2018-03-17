#include "Port.hpp"

Port::Port(void)
{
	_pSerialPort = new Serial;

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

	// Create and init GUI's items
	MainLayout = new QGridLayout;

	BaudRateComboBox = new QComboBox;
	BaudRateComboBox->addItems(_slBaudRate);
	ParityComboBox = new QComboBox;
	ParityComboBox->addItems(_slParity);
	FlowControlComboBox = new QComboBox;
	FlowControlComboBox->addItems(_slFlowControl);
	StopBitsComboBox = new QComboBox,
	StopBitsComboBox->addItems(_slStopBits);
	DataBitsComboBox = new QComboBox;
	DataBitsComboBox->addItems(_slDataBits);
	ModeComboBox = new QComboBox;
	ModeComboBox->addItems(_slMode);

	PortNameLineEdit = new QLineEdit;
	PortNameLineEdit->setPlaceholderText("Port Name...");
	CommandLineEdit = new QLineEdit;
	CommandLineEdit->setPlaceholderText("Command...");

	BaudRateLabel = new QLabel("Baud Rate");;
	ParityLabel = new QLabel("Parity ");
	FlowControlLabel = new QLabel("Flow Control");
	StopBitsLabel = new QLabel("Stop Bits");
	DataBitsLabel = new QLabel("Data Bits");
	ModeLabel = new QLabel("Mode");
	PortNameLabel = new QLabel("Port Name");
	CommandLabel = new QLabel("Your command");

	OpenCloseConnectionPushButton = new QPushButton;
	SendCommandPushButton = new QPushButton("Send");

	MainLayout->setVerticalSpacing(1);
	MainLayout->setHorizontalSpacing(10);

	MainLayout->addWidget(PortNameLabel, 1, 0, Qt::AlignRight);
	MainLayout->addWidget(PortNameLineEdit, 1, 1, Qt::AlignLeft);

	MainLayout->addWidget(BaudRateLabel, 2, 0, Qt::AlignRight);
	MainLayout->addWidget(BaudRateComboBox, 2, 1, Qt::AlignLeft);

	MainLayout->addWidget(ParityLabel, 3, 0, Qt::AlignRight);
	MainLayout->addWidget(ParityComboBox, 3, 1, Qt::AlignLeft);

	MainLayout->addWidget(FlowControlLabel, 4, 0, Qt::AlignRight);
	MainLayout->addWidget(FlowControlComboBox, 4, 1, Qt::AlignLeft);

	MainLayout->addWidget(StopBitsLabel, 5, 0, Qt::AlignRight);
	MainLayout->addWidget(StopBitsComboBox, 5, 1, Qt::AlignLeft);

	MainLayout->addWidget(DataBitsLabel, 6, 0, Qt::AlignRight);
	MainLayout->addWidget(DataBitsComboBox, 6, 1, Qt::AlignLeft);

	MainLayout->addWidget(ModeLabel, 7, 0, Qt::AlignRight);
	MainLayout->addWidget(ModeComboBox, 7, 1, Qt::AlignLeft);

	MainLayout->addWidget(OpenCloseConnectionPushButton, 8, 1);

	MainLayout->addWidget(CommandLabel, 9, 0, Qt::AlignRight);
	MainLayout->addWidget(CommandLineEdit, 9, 1, Qt::AlignLeft);
	
	MainLayout->addWidget(SendCommandPushButton, 10, 1);

	this->setLayout(MainLayout);

	// Connect signals to slots
	QObject::connect(PortNameLineEdit, SIGNAL(textChanged(QString)), this, SLOT(portName_Changed(QString)));
	QObject::connect(this, SIGNAL(stateChanged(void)), this, SLOT(updateState(void)));
	QObject::connect(OpenCloseConnectionPushButton, SIGNAL(clicked(void)), this, SLOT(openConnectionPushButton_clicked(void)));
	QObject::connect(_pSerialPort, SIGNAL(ReceiveData(QString)), this, SLOT(dataReceived(QString)));
	
	// update OpenCloseConnectionPushButton text
	emit stateChanged();
}

Port::~Port(void)
{
	delete _pSerialPort; _pSerialPort = nullptr;
	delete MainLayout; MainLayout = nullptr;
	delete BaudRateComboBox; BaudRateComboBox = nullptr;
	delete ParityComboBox; ParityComboBox = nullptr;
	delete FlowControlComboBox; FlowControlComboBox = nullptr;
	delete StopBitsComboBox; StopBitsComboBox = nullptr;
	delete DataBitsComboBox; DataBitsComboBox = nullptr;
	delete ModeComboBox; ModeComboBox = nullptr;
	delete PortNameLineEdit; PortNameLineEdit = nullptr;
	delete CommandLineEdit; CommandLineEdit = nullptr;
	delete BaudRateLabel; BaudRateLabel = nullptr;
	delete ParityLabel; ParityLabel = nullptr;
	delete FlowControlLabel; FlowControlLabel = nullptr;
	delete StopBitsLabel; StopBitsLabel = nullptr;
	delete DataBitsLabel; DataBitsLabel = nullptr;
	delete DataBitsLabel; DataBitsLabel = nullptr;
	delete ModeLabel; ModeLabel = nullptr;
	delete PortNameLabel; PortNameLabel = nullptr;
	delete CommandLabel; CommandLabel = nullptr;
	delete OpenCloseConnectionPushButton; OpenCloseConnectionPushButton = nullptr;
	delete SendCommandPushButton; SendCommandPushButton = nullptr;
}


void Port::openConnectionPushButton_clicked(void)
{
	if(_pSerialPort->isOpen())
	{
		_pSerialPort->close();
	}
	else
	{
		QHash<QString, Serial::Mode>::iterator it = _mMode.find(ModeComboBox->currentText());
		_sPortName = PortNameLineEdit->text();
		_pSerialPort->setPortName(_sPortName);
		if(_pSerialPort->open(it.value()) == Serial::Error::NoError)
			emit printMessage("Successful to open <b>" + _sPortName + "</b>");
		else
			emit printMessage("An error occured while opening <b>" + _sPortName + "</b>");
	}
	
	emit stateChanged();
}

void Port::sendCommandPushButton_clicked(void)
{
	_pSerialPort->send(CommandLineEdit->text());
}

void Port::baudRate_Changed(QString text)
{
	QHash<QString, Serial::BaudRate>::iterator it = _mBaudRate.find(text);
	if(_pSerialPort->setBaudRate(it.value()) == Serial::Error::NoError)
		emit printMessage("Test");
	else
		emit printMessage("Test");
}

void Port::parity_Changed(QString text)
{
	QHash<QString, Serial::Parity>::iterator it = _mParity.find(text);
	if(_pSerialPort->setParity(it.value()) == Serial::Error::NoError)
		emit printMessage("Test");
	else
		emit printMessage("Test");
}

void Port::flowControl_Changed(QString text)
{
	QHash<QString, Serial::FlowControl>::iterator it = _mFlowControl.find(text);
	if(_pSerialPort->setFlowControl(it.value()) == Serial::Error::NoError)
		emit printMessage("Test");
	else
		emit printMessage("Test");
}

void Port::stopBits_Changed(QString text)
{
	QHash<QString, Serial::StopBits>::iterator it = _mStopBits.find(text);
	if(_pSerialPort->setStopBits(it.value()) == Serial::Error::NoError)
		emit printMessage("Test");
	else
		emit printMessage("Test");
}

void Port::dataBits_Changed(QString text)
{
	QHash<QString, Serial::DataBits>::iterator it = _mDataBits.find(text);
	if(_pSerialPort->setDataBits(it.value()) == Serial::Error::NoError)
		emit printMessage("Test");
	else
		emit printMessage("Test");
}

void Port::dataReceived(QString text)
{
	qDebug() << "Receive data";
	emit printMessage("From <b>" + _sPortName + "</b> : " + text);
}

void Port::updateState(void)
{
	qDebug() << "Update";
	bool bDisable = _pSerialPort->isOpen();
	
	BaudRateComboBox->setDisabled(bDisable);
	ParityComboBox->setDisabled(bDisable);
	FlowControlComboBox->setDisabled(bDisable);
	StopBitsComboBox->setDisabled(bDisable);
	DataBitsComboBox->setDisabled(bDisable);
	ModeComboBox->setDisabled(bDisable);
	PortNameLineEdit->setDisabled(bDisable);

	SendCommandPushButton->setDisabled(!bDisable);
	CommandLineEdit->setDisabled(!bDisable);

	if(bDisable)
		OpenCloseConnectionPushButton->setText("Close");
	else
		OpenCloseConnectionPushButton->setText("Open");
}

void Port::portName_Changed(QString name)
{
	qDebug() << "Port name changed()";
	emit portNameChanged(name);
}
