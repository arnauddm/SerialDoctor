#ifndef SERIALDOCTOR_HPP
#define SERIALDOCTOR_HPP

#include "Serial.hpp"

#include <QMainWindow>
#include <QDebug>

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
	void on_RefreshScanPushButton_clicked(void);

signals:

private:
	Ui::SerialDoctor 	*ui;
};

#endif // SERIALDOCTOR_HPP
