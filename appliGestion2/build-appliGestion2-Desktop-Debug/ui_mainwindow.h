/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelRayon;
    QComboBox *comboBoxRayon;
    QPushButton *pushButtonAddRayon;
    QPushButton *pushButtonModifRayon;
    QPushButton *pushButtonSuppRayon;
    QTableWidget *tableWidgetProduit;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelLibProd;
    QLineEdit *lineEditLib;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDescProd;
    QLineEdit *lineEditDesc;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelPUProd;
    QLineEdit *lineEditPU;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelUniteProd;
    QComboBox *comboBoxUnite;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonQuitter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(709, 570);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 643, 292));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelRayon = new QLabel(widget);
        labelRayon->setObjectName(QStringLiteral("labelRayon"));

        horizontalLayout->addWidget(labelRayon);

        comboBoxRayon = new QComboBox(widget);
        comboBoxRayon->setObjectName(QStringLiteral("comboBoxRayon"));

        horizontalLayout->addWidget(comboBoxRayon);

        pushButtonAddRayon = new QPushButton(widget);
        pushButtonAddRayon->setObjectName(QStringLiteral("pushButtonAddRayon"));

        horizontalLayout->addWidget(pushButtonAddRayon);

        pushButtonModifRayon = new QPushButton(widget);
        pushButtonModifRayon->setObjectName(QStringLiteral("pushButtonModifRayon"));

        horizontalLayout->addWidget(pushButtonModifRayon);

        pushButtonSuppRayon = new QPushButton(widget);
        pushButtonSuppRayon->setObjectName(QStringLiteral("pushButtonSuppRayon"));

        horizontalLayout->addWidget(pushButtonSuppRayon);


        verticalLayout->addLayout(horizontalLayout);

        tableWidgetProduit = new QTableWidget(widget);
        if (tableWidgetProduit->columnCount() < 5)
            tableWidgetProduit->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetProduit->setObjectName(QStringLiteral("tableWidgetProduit"));
        tableWidgetProduit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetProduit->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(tableWidgetProduit);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelLibProd = new QLabel(widget);
        labelLibProd->setObjectName(QStringLiteral("labelLibProd"));

        horizontalLayout_2->addWidget(labelLibProd);

        lineEditLib = new QLineEdit(widget);
        lineEditLib->setObjectName(QStringLiteral("lineEditLib"));

        horizontalLayout_2->addWidget(lineEditLib);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelDescProd = new QLabel(widget);
        labelDescProd->setObjectName(QStringLiteral("labelDescProd"));

        horizontalLayout_3->addWidget(labelDescProd);

        lineEditDesc = new QLineEdit(widget);
        lineEditDesc->setObjectName(QStringLiteral("lineEditDesc"));

        horizontalLayout_3->addWidget(lineEditDesc);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelPUProd = new QLabel(widget);
        labelPUProd->setObjectName(QStringLiteral("labelPUProd"));

        horizontalLayout_4->addWidget(labelPUProd);

        lineEditPU = new QLineEdit(widget);
        lineEditPU->setObjectName(QStringLiteral("lineEditPU"));

        horizontalLayout_4->addWidget(lineEditPU);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelUniteProd = new QLabel(widget);
        labelUniteProd->setObjectName(QStringLiteral("labelUniteProd"));

        horizontalLayout_5->addWidget(labelUniteProd);

        comboBoxUnite = new QComboBox(widget);
        comboBoxUnite->setObjectName(QStringLiteral("comboBoxUnite"));

        horizontalLayout_5->addWidget(comboBoxUnite);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButtonQuitter = new QPushButton(widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_6->addWidget(pushButtonQuitter);


        verticalLayout_5->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 709, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButtonSuppRayon, pushButtonModifRayon);
        QWidget::setTabOrder(pushButtonModifRayon, pushButtonAddRayon);
        QWidget::setTabOrder(pushButtonAddRayon, tableWidgetProduit);
        QWidget::setTabOrder(tableWidgetProduit, comboBoxRayon);
        QWidget::setTabOrder(comboBoxRayon, lineEditLib);
        QWidget::setTabOrder(lineEditLib, lineEditDesc);
        QWidget::setTabOrder(lineEditDesc, lineEditPU);
        QWidget::setTabOrder(lineEditPU, pushButtonQuitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        labelRayon->setText(QApplication::translate("MainWindow", "Les Rayons", Q_NULLPTR));
        pushButtonAddRayon->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButtonModifRayon->setText(QApplication::translate("MainWindow", "Modif", Q_NULLPTR));
        pushButtonSuppRayon->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Num\303\251ro", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Libell\303\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProduit->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduit->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Prix Unitaire", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduit->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Unit\303\251", Q_NULLPTR));
        labelLibProd->setText(QApplication::translate("MainWindow", "Libell\303\251", Q_NULLPTR));
        labelDescProd->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        labelPUProd->setText(QApplication::translate("MainWindow", "PrixUnitaire", Q_NULLPTR));
        labelUniteProd->setText(QApplication::translate("MainWindow", "Unit\303\251", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Modif", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButtonQuitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
