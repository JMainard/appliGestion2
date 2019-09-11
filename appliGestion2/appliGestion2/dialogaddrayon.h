#ifndef DIALOGADDRAYON_H
#define DIALOGADDRAYON_H
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class DialogAddRayon;
}

class DialogAddRayon : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddRayon(QWidget *parent = 0);
    ~DialogAddRayon();

private slots:
    void on_pushButtonAddRayonVal_clicked();
    void on_pushButtonAnnulRayon_clicked();

private:
    Ui::DialogAddRayon *ui;

};

#endif // DIALOGADDRAYON_H
