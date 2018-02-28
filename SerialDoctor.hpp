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

private slots:
	void on_OpenConnectionPushButton_clicked(void);
	void on_RefreshScanPushButton_clicked(void);
	void on_SendCommandPushButton_clicked(void);

	void baudRate_Changed(QString text);
	void parity_Changed(QString text);
	void flowControl_Changed(QString text);
	void stopBits_Changed(QString text);
	void dataBits_Changed(QString text);

	void dataReceived(QString text);
	void updateState(void);

signals:
	void stateChanged(void);

private:
	Ui::SerialDoctor *ui;
	Serial *_SerialPort;

	QStringList	_slBaudRate;
	QStringList _slDataBits;
	QStringList _slParity;
	QStringList _slStopBits;
	QStringList _slFlowControl;
	QStringList _slMode;

	QMap<QString, Serial::BaudRate> 		_mBaudRate;
	QMap<QString, Serial::DataBits> 		_mDataBits;
	QMap<QString, Serial::Parity>	 		_mParity;
	QMap<QString, Serial::StopBits> 		_mStopBits;
	QMap<QString, Serial::FlowControl>	 	_mFlowControl;
	QMap<QString, Serial::Mode> 			_mMode;
};

#endif // SERIALDOCTOR_HPP
