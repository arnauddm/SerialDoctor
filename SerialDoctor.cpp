#include "SerialDoctor.hpp"
#include "ui_SerialDoctorDialog.h"
#include "Port.hpp"

SerialDoctor::SerialDoctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialDoctor)
{
    ui->setupUi(this);

	QObject::connect(ui->RefreshScanPushButton, SIGNAL(clicked()), this, SLOT(refreshScan()));

	addPort();
}

SerialDoctor::~SerialDoctor()
{
    delete ui;
}

void SerialDoctor::refreshScan(void)
{
	/*
	Serial *SerialPort = new Serial;
	QString scan = SerialPort->scan();
	qDebug() << scan;
	//ui->ReturnScanTextEdit->setPlainText(SerialPort->scan());
	delete SerialPort;
	*/
	ui->ReturnScanTextEdit->setPlainText("Internal error");
}

void SerialDoctor::updateTabName(QString tabName)
{
	int nActualTab = ui->PortTabWidget->currentIndex();
	ui->PortTabWidget->setTabText(nActualTab, tabName);
}

void SerialDoctor::addPort(void)
{
	Port *p = new Port;
	ui->PortTabWidget->addTab(p, "New port");
	QObject::connect(p, SIGNAL(portNameChanged(QString)), this, SLOT(updateTabName(QString)));
}
