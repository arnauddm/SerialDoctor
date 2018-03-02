#include "SerialDoctor.hpp"
#include "ui_SerialDoctorDialog.h"

SerialDoctor::SerialDoctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialDoctor)
{
    ui->setupUi(this);
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

