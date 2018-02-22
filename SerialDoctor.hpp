#ifndef SERIALDOCTOR_HPP
#define SERIALDOCTOR_HPP

#include <QMainWindow>

namespace Ui {
class SerialDoctor;
}

class SerialDoctor : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialDoctor(QWidget *parent = 0);
    ~SerialDoctor();

private:
    Ui::SerialDoctor *ui;
};

#endif // SERIALDOCTOR_HPP
