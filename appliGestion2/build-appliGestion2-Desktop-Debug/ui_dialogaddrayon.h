/********************************************************************************
** Form generated from reading UI file 'dialogaddrayon.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDRAYON_H
#define UI_DIALOGADDRAYON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddRayon
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxAjout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelLibRayon;
    QLineEdit *lineEditLibRayon;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDescRayon;
    QLineEdit *lineEditDescRayon;
    QLabel *labelPhotoRayon;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddRayonVal;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonAnnulRayon;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogAddRayon)
    {
        if (DialogAddRayon->objectName().isEmpty())
            DialogAddRayon->setObjectName(QStringLiteral("DialogAddRayon"));
        DialogAddRayon->resize(754, 551);
        widget = new QWidget(DialogAddRayon);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 337, 207));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBoxAjout = new QGroupBox(widget);
        groupBoxAjout->setObjectName(QStringLiteral("groupBoxAjout"));
        horizontalLayout_5 = new QHBoxLayout(groupBoxAjout);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelLibRayon = new QLabel(groupBoxAjout);
        labelLibRayon->setObjectName(QStringLiteral("labelLibRayon"));

        horizontalLayout_2->addWidget(labelLibRayon);

        lineEditLibRayon = new QLineEdit(groupBoxAjout);
        lineEditLibRayon->setObjectName(QStringLiteral("lineEditLibRayon"));

        horizontalLayout_2->addWidget(lineEditLibRayon);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelDescRayon = new QLabel(groupBoxAjout);
        labelDescRayon->setObjectName(QStringLiteral("labelDescRayon"));

        horizontalLayout_3->addWidget(labelDescRayon);

        lineEditDescRayon = new QLineEdit(groupBoxAjout);
        lineEditDescRayon->setObjectName(QStringLiteral("lineEditDescRayon"));

        horizontalLayout_3->addWidget(lineEditDescRayon);


        verticalLayout->addLayout(horizontalLayout_3);

        labelPhotoRayon = new QLabel(groupBoxAjout);
        labelPhotoRayon->setObjectName(QStringLiteral("labelPhotoRayon"));

        verticalLayout->addWidget(labelPhotoRayon);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonAddRayonVal = new QPushButton(groupBoxAjout);
        pushButtonAddRayonVal->setObjectName(QStringLiteral("pushButtonAddRayonVal"));

        horizontalLayout->addWidget(pushButtonAddRayonVal);


        horizontalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBoxAjout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButtonAnnulRayon = new QPushButton(widget);
        pushButtonAnnulRayon->setObjectName(QStringLiteral("pushButtonAnnulRayon"));

        verticalLayout_2->addWidget(pushButtonAnnulRayon);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(DialogAddRayon);

        QMetaObject::connectSlotsByName(DialogAddRayon);
    } // setupUi

    void retranslateUi(QDialog *DialogAddRayon)
    {
        DialogAddRayon->setWindowTitle(QApplication::translate("DialogAddRayon", "Dialog", Q_NULLPTR));
        groupBoxAjout->setTitle(QApplication::translate("DialogAddRayon", "Ajouter", Q_NULLPTR));
        labelLibRayon->setText(QApplication::translate("DialogAddRayon", "Libell\303\251 : ", Q_NULLPTR));
        labelDescRayon->setText(QApplication::translate("DialogAddRayon", "Description : ", Q_NULLPTR));
        labelPhotoRayon->setText(QApplication::translate("DialogAddRayon", "Photo : ", Q_NULLPTR));
        pushButtonAddRayonVal->setText(QApplication::translate("DialogAddRayon", "Ajouter", Q_NULLPTR));
        pushButtonAnnulRayon->setText(QApplication::translate("DialogAddRayon", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogAddRayon: public Ui_DialogAddRayon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDRAYON_H
