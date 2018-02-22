#include "SerialDoctor.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SerialDoctor w;
    w.show();

    return a.exec();
}
