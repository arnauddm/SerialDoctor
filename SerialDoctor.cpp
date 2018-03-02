#include "SerialDoctor.hpp"
#include "ui_SerialDoctorDialog.h"
#include "Port.hpp"

SerialDoctor::SerialDoctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialDoctor)
{
    ui->setupUi(this);

	newPortButton = new QToolButton;
	newPortButton->setText("+");

	Port *p1 = new Port;

	ui->PortTabWidget->insertTab(0, p1,"test");
	//ui->PortTabWidget->widget(0) = p1;
	//ui->PortTabWidget->tabBar()->setTabButton(0, QTabBar::RightSide, newPortButton);
}

SerialDoctor::~SerialDoctor()
{
    delete ui;
}

void SerialDoctor::on_RefreshScanPushButton_clicked(void)
{
	Serial SerialPort;
	ui->ReturnScanTextEdit->setPlainText(SerialPort.scan());
}

