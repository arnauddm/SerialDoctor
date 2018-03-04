#ifndef SERIALDOCTOR_HPP
#define SERIALDOCTOR_HPP

#include "Serial.hpp"

#include <QMainWindow>
#include <QDebug>
#include <QToolButton>
#include <QLabel>

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
	void refreshScan(void);
	void updateTabName(QString tabName);
	void addPort(void);
	void print(QString msg);

signals:

private:
	Ui::SerialDoctor 	*ui;
	QToolButton			*newPortButton;
};

#endif // SERIALDOCTOR_HPP
