#include <QCoreApplication>
#include <QString>
#include "mytcpserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if (argc > 1) {
        QString name = argv[1];
        qDebug() << "Hello," << name;
    } else {
        qDebug() << "Hello, World!";
    }

    MyTcpServer myserv;
    return a.exec();
}
