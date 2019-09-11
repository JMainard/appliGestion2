#ifndef DIALOGMODIFRAYON_H
#define DIALOGMODIFRAYON_H

#include <QDialog>

namespace Ui {
class DialogModifRayon;
}

class DialogModifRayon : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModifRayon(QWidget *parent = 0);
    ~DialogModifRayon();

private slots:
    void on_pushButtonAnnulModifRayon_clicked();

private:
    Ui::DialogModifRayon *ui;
};

#endif // DIALOGMODIFRAYON_H
