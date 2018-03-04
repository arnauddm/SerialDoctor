#ifndef __PORT_HPP__
#define __PORT_HPP__

#include "Serial.hpp"

#include <QGridLayout>
#include <QComboBox>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QObject>
#include <QStringList>
#include <QString>
#include <QWidget>

class Port : public QWidget
{
	Q_OBJECT
public:
	Port(void);
	~Port(void);

public slots:
	void openConnectionPushButton_clicked(void);
	void sendCommandPushButton_clicked(void);
	void baudRate_Changed(QString text);
	void portName_Changed(QString text);
	void parity_Changed(QString text);
	void flowControl_Changed(QString text);
	void stopBits_Changed(QString text);
	void dataBits_Changed(QString text);
	void dataReceived(QString text);
	void updateState(void);

signals:
	void stateChanged(void);
	void printMessage(QString sMessage);
	void portNameChanged(QString name);

private:
	Serial									*_pSerialPort;

	QGridLayout								*MainLayout;

	QComboBox 								*BaudRateComboBox;
	QComboBox 								*ParityComboBox;
	QComboBox 								*FlowControlComboBox;
	QComboBox 								*StopBitsComboBox;
	QComboBox 								*DataBitsComboBox;
	QComboBox 								*ModeComboBox;

	QLineEdit								*PortNameLineEdit;
	QLineEdit								*CommandLineEdit;

	QLabel 									*BaudRateLabel;
	QLabel 									*ParityLabel;
	QLabel 									*FlowControlLabel;
	QLabel 									*StopBitsLabel;
	QLabel 									*DataBitsLabel;
	QLabel 									*ModeLabel;
	QLabel									*PortNameLabel;
	QLabel									*CommandLabel;

	QPushButton								*OpenCloseConnectionPushButton;
	QPushButton								*SendCommandPushButton;

	QStringList								_slBaudRate;
	QStringList								_slDataBits;
	QStringList 							_slParity;
	QStringList								_slFlowControl;
	QStringList								_slStopBits;
	QStringList								_slMode;

	QMap<QString, Serial::BaudRate>         _mBaudRate;
	QMap<QString, Serial::DataBits>         _mDataBits;
	QMap<QString, Serial::Parity>           _mParity;
	QMap<QString, Serial::StopBits>         _mStopBits;
	QMap<QString, Serial::FlowControl>      _mFlowControl;
	QMap<QString, Serial::Mode>             _mMode;
};

#endif
