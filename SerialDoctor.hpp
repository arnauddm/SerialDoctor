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

	void BaudRate_Changed(QString text);
	void Parity_Changed(QString text);
	void FlowControl_Changed(QString text);
	void StopBits_Changed(QString text);
	void DataBits_Changed(QString text);

	void DataReceived(QString text);

private:
	Ui::SerialDoctor *ui;
	Serial *SerialPort;

	QStringList	slBaudRate;
	QStringList slDataBits;
	QStringList slParity;
	QStringList slStopBits;
	QStringList slFlowControl;
	QStringList slMode;

	QMap<QString, Serial::BaudRate> 		mBaudRate;
	QMap<QString, Serial::DataBits> 		mDataBits;
	QMap<QString, Serial::Parity>	 		mParity;
	QMap<QString, Serial::StopBits> 		mStopBits;
	QMap<QString, Serial::FlowControl>	 	mFlowControl;
	QMap<QString, Serial::Mode> 			mMode;
};

#endif // SERIALDOCTOR_HPP
