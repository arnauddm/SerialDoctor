#ifndef SERIALDOCTOR_HPP
#define SERIALDOCTOR_HPP

#include "Serial.hpp"

#include <QMainWindow>
#include <QDebug>
#include <QStringList>
#include <QPair>
#include <QList>
#include <QComboBox>

namespace Ui {
class SerialDoctor;
}

class SerialDoctor : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialDoctor(QWidget *parent = 0);
    ~SerialDoctor();

public slots:
	void on_OpenConnectionPushButton_clicked(void);
	void on_RefreshScanPushButton_clicked(void);
	void on_SendCommandPushButton_clicked(void);

private:
	Ui::SerialDoctor *ui;
	Serial *SerialPort;

	QStringList	slBaudRate;
	QStringList slDataBits;
	QStringList slParity;
	QStringList slStopBits;
	QStringList slFlowControl;
	QStringList slMode;

	QList<QPair<QString, Serial::BaudRate> > lBaudRate;
	QList<QPair<QString, Serial::DataBits> > lDataBits;
	QList<QPair<QString, Serial::Parity> > lParity;
	QList<QPair<QString, Serial::StopBits> > lStopBits;
	QList<QPair<QString, Serial::FlowControl> > lFlowControl;
	QList<QPair<QString, Serial::Mode> > lMode;
};

#endif // SERIALDOCTOR_HPP
