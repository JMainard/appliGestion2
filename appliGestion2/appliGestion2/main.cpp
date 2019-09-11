#include "mainwindow.h"
#include <QApplication>
#include "dialogaddrayon.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
       maBase.setHostName("localhost");
       maBase.setDatabaseName("appliGestion");
       maBase.setUserName("jeremy");
       maBase.setPassword("elini01");
       bool bddOk = maBase.open();
       if (bddOk) {
            MainWindow w;
            w.show();
            return a.exec();
       }
       else {
           return 1;
       }
}
