#include "dialogmodifrayon.h"
#include "ui_dialogmodifrayon.h"

DialogModifRayon::DialogModifRayon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModifRayon)
{
    ui->setupUi(this);
}

DialogModifRayon::~DialogModifRayon()
{
    delete ui;
}

void DialogModifRayon::on_pushButtonAnnulModifRayon_clicked()
{
    close();
}
