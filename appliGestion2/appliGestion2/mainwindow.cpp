#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QDebug>
#include "dialogaddrayon.h"
#include "dialogmodifrayon.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    rangerLesRayons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rangerLesRayons()
{
    qDebug() << "void MainWindow::rangerLesRayons()";
    ui->comboBoxRayon->clear();
     QSqlQuery reqNomRayon("select rayonNum,rayonLibelle,rayonphoto,rayonDesc from rayon ");
     while (reqNomRayon.next()) {
        QString numRay= reqNomRayon.value("rayonNum").toString();
        QString libRay=reqNomRayon.value("rayonLibelle").toString();
        ui->comboBoxRayon->addItem(libRay,numRay);

     }

}

void MainWindow::on_pushButtonAddRayon_clicked()
{

 DialogAddRayon dialogAjout;

 if(dialogAjout.exec()==QDialog::Accepted)
 {
     rangerLesRayons();
 }

}

void MainWindow::on_pushButtonModifRayon_clicked()
{
 DialogModifRayon dialogModif;
 dialogModif.exec();
}

void MainWindow::on_pushButtonSuppRayon_clicked()
{

}

void MainWindow::on_pushButtonQuitter_clicked()
{
    close();
}
