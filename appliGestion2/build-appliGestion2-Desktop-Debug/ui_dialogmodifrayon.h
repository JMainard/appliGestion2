/********************************************************************************
** Form generated from reading UI file 'dialogmodifrayon.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFRAYON_H
#define UI_DIALOGMODIFRAYON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogModifRayon
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditModifLibRayon;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelDescModifRayon;
    QLineEdit *lineEditModifDescRayon;
    QLabel *labelModifRayonPhoto;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonValModifRayon;
    QPushButton *pushButtonAnnulModifRayon;

    void setupUi(QDialog *DialogModifRayon)
    {
        if (DialogModifRayon->objectName().isEmpty())
            DialogModifRayon->setObjectName(QStringLiteral("DialogModifRayon"));
        DialogModifRayon->resize(410, 319);
        horizontalLayout_4 = new QHBoxLayout(DialogModifRayon);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogModifRayon);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditModifLibRayon = new QLineEdit(DialogModifRayon);
        lineEditModifLibRayon->setObjectName(QStringLiteral("lineEditModifLibRayon"));

        horizontalLayout->addWidget(lineEditModifLibRayon);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelDescModifRayon = new QLabel(DialogModifRayon);
        labelDescModifRayon->setObjectName(QStringLiteral("labelDescModifRayon"));

        horizontalLayout_2->addWidget(labelDescModifRayon);

        lineEditModifDescRayon = new QLineEdit(DialogModifRayon);
        lineEditModifDescRayon->setObjectName(QStringLiteral("lineEditModifDescRayon"));

        horizontalLayout_2->addWidget(lineEditModifDescRayon);


        verticalLayout->addLayout(horizontalLayout_2);

        labelModifRayonPhoto = new QLabel(DialogModifRayon);
        labelModifRayonPhoto->setObjectName(QStringLiteral("labelModifRayonPhoto"));

        verticalLayout->addWidget(labelModifRayonPhoto);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonValModifRayon = new QPushButton(DialogModifRayon);
        pushButtonValModifRayon->setObjectName(QStringLiteral("pushButtonValModifRayon"));

        horizontalLayout_3->addWidget(pushButtonValModifRayon);

        pushButtonAnnulModifRayon = new QPushButton(DialogModifRayon);
        pushButtonAnnulModifRayon->setObjectName(QStringLiteral("pushButtonAnnulModifRayon"));

        horizontalLayout_3->addWidget(pushButtonAnnulModifRayon);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(DialogModifRayon);

        QMetaObject::connectSlotsByName(DialogModifRayon);
    } // setupUi

    void retranslateUi(QDialog *DialogModifRayon)
    {
        DialogModifRayon->setWindowTitle(QApplication::translate("DialogModifRayon", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogModifRayon", "Libell\303\251 : ", Q_NULLPTR));
        labelDescModifRayon->setText(QApplication::translate("DialogModifRayon", "Description", Q_NULLPTR));
        labelModifRayonPhoto->setText(QApplication::translate("DialogModifRayon", "TextLabel", Q_NULLPTR));
        pushButtonValModifRayon->setText(QApplication::translate("DialogModifRayon", "Modifier", Q_NULLPTR));
        pushButtonAnnulModifRayon->setText(QApplication::translate("DialogModifRayon", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogModifRayon: public Ui_DialogModifRayon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFRAYON_H
