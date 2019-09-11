#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSqlDatabase>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots :
    void rangerLesRayons();
    void on_pushButtonAddRayon_clicked();
    void on_pushButtonModifRayon_clicked();
    void on_pushButtonSuppRayon_clicked();
    void on_pushButtonQuitter_clicked();
};

#endif // MAINWINDOW_H
