#include "dialogaddrayon.h"
#include "ui_dialogaddrayon.h"
#include <QSqlQuery>
#include <QDebug>
#include <time.h>

DialogAddRayon::DialogAddRayon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddRayon)
{
    ui->setupUi(this);

    srand(time(NULL));//on initialise le générateur

}

DialogAddRayon::~DialogAddRayon()
{
    delete ui;
}


void DialogAddRayon::on_pushButtonAddRayonVal_clicked()
{
 QString descNewRayon= ui->lineEditDescRayon->text();
 QString libNewRayon = ui->lineEditLibRayon->text();
 QString numNewRayon = QString::number(rand()%500);
 qDebug() << numNewRayon;

 QSqlQuery reqNomRayon("insert into rayon (rayonNum, rayonLibelle , rayonDesc) values ("+numNewRayon+",'"+libNewRayon+"','"+descNewRayon+"')");
 accept();
}


void DialogAddRayon::on_pushButtonAnnulRayon_clicked()
{
    reject();
}
