/********************************************************************************
** Form generated from reading UI file 'cdtheque.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDTHEQUE_H
#define UI_CDTHEQUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDthequeClass
{
public:
    QAction *actionImport_Json_File;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton_Delete;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QMenuBar *menuBar;
    QMenu *menuImport_Donn_es;

    void setupUi(QMainWindow *CDthequeClass)
    {
        if (CDthequeClass->objectName().isEmpty())
            CDthequeClass->setObjectName(QString::fromUtf8("CDthequeClass"));
        CDthequeClass->resize(897, 457);
        actionImport_Json_File = new QAction(CDthequeClass);
        actionImport_Json_File->setObjectName(QString::fromUtf8("actionImport_Json_File"));
        centralWidget = new QWidget(CDthequeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(250, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton_Delete = new QPushButton(groupBox);
        pushButton_Delete->setObjectName(QString::fromUtf8("pushButton_Delete"));

        verticalLayout->addWidget(pushButton_Delete);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(250, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        groupBox_2->setPalette(palette);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_2->addWidget(widget);


        horizontalLayout->addWidget(groupBox_3);

        CDthequeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CDthequeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 897, 22));
        menuImport_Donn_es = new QMenu(menuBar);
        menuImport_Donn_es->setObjectName(QString::fromUtf8("menuImport_Donn_es"));
        CDthequeClass->setMenuBar(menuBar);

        menuBar->addAction(menuImport_Donn_es->menuAction());
        menuImport_Donn_es->addAction(actionImport_Json_File);

        retranslateUi(CDthequeClass);

        QMetaObject::connectSlotsByName(CDthequeClass);
    } // setupUi

    void retranslateUi(QMainWindow *CDthequeClass)
    {
        CDthequeClass->setWindowTitle(QCoreApplication::translate("CDthequeClass", "CDtheque", nullptr));
        actionImport_Json_File->setText(QCoreApplication::translate("CDthequeClass", "Import d'albums", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CDthequeClass", "Catalogue d'albums de musique", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("CDthequeClass", "Supprimer", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CDthequeClass", "Description de l'album", nullptr));
        label->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("CDthequeClass", "Statistiques sur les albums", nullptr));
        menuImport_Donn_es->setTitle(QCoreApplication::translate("CDthequeClass", "Import Donn\303\251es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CDthequeClass: public Ui_CDthequeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDTHEQUE_H
