#include "principal.h"

#include <QApplication>

#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;  
    w.show();

    qDebug() << "Probando GitHub";
    return a.exec();
}
