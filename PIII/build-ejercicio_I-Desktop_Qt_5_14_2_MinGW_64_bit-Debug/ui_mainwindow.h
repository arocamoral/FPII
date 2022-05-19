/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCargar;
    QAction *actionDesordenar;
    QAction *actionAbout;
    QAction *actionSalir;
    QWidget *centralwidget;
    QPushButton *pB_1;
    QPushButton *pB_2;
    QPushButton *pB_3;
    QPushButton *pB_4;
    QPushButton *pB_5;
    QPushButton *pB_6;
    QPushButton *pB_7;
    QPushButton *pB_8;
    QPushButton *pB_9;
    QPushButton *pB_10;
    QPushButton *pB_11;
    QPushButton *pB_12;
    QPushButton *pB_13;
    QPushButton *pB_15;
    QPushButton *pB_14;
    QPushButton *pB_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(471, 418);
        actionCargar = new QAction(MainWindow);
        actionCargar->setObjectName(QString::fromUtf8("actionCargar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Material Ejercicio 1/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCargar->setIcon(icon);
        actionDesordenar = new QAction(MainWindow);
        actionDesordenar->setObjectName(QString::fromUtf8("actionDesordenar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Material Ejercicio 1/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesordenar->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Material Ejercicio 1/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Material Ejercicio 1/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pB_1 = new QPushButton(centralwidget);
        pB_1->setObjectName(QString::fromUtf8("pB_1"));
        pB_1->setGeometry(QRect(20, 20, 101, 71));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pB_1->sizePolicy().hasHeightForWidth());
        pB_1->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof00.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_1->setIcon(icon4);
        pB_1->setIconSize(QSize(100, 100));
        pB_2 = new QPushButton(centralwidget);
        pB_2->setObjectName(QString::fromUtf8("pB_2"));
        pB_2->setGeometry(QRect(130, 20, 101, 71));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof10.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_2->setIcon(icon5);
        pB_2->setIconSize(QSize(100, 100));
        pB_3 = new QPushButton(centralwidget);
        pB_3->setObjectName(QString::fromUtf8("pB_3"));
        pB_3->setGeometry(QRect(240, 20, 101, 71));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof20.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_3->setIcon(icon6);
        pB_3->setIconSize(QSize(100, 100));
        pB_4 = new QPushButton(centralwidget);
        pB_4->setObjectName(QString::fromUtf8("pB_4"));
        pB_4->setGeometry(QRect(350, 20, 101, 71));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof30.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_4->setIcon(icon7);
        pB_4->setIconSize(QSize(100, 100));
        pB_5 = new QPushButton(centralwidget);
        pB_5->setObjectName(QString::fromUtf8("pB_5"));
        pB_5->setGeometry(QRect(20, 100, 101, 71));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof01.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_5->setIcon(icon8);
        pB_5->setIconSize(QSize(100, 100));
        pB_6 = new QPushButton(centralwidget);
        pB_6->setObjectName(QString::fromUtf8("pB_6"));
        pB_6->setGeometry(QRect(130, 100, 101, 71));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof11.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_6->setIcon(icon9);
        pB_6->setIconSize(QSize(100, 100));
        pB_7 = new QPushButton(centralwidget);
        pB_7->setObjectName(QString::fromUtf8("pB_7"));
        pB_7->setGeometry(QRect(240, 100, 101, 71));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof21.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_7->setIcon(icon10);
        pB_7->setIconSize(QSize(100, 100));
        pB_8 = new QPushButton(centralwidget);
        pB_8->setObjectName(QString::fromUtf8("pB_8"));
        pB_8->setGeometry(QRect(350, 100, 101, 71));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof31.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_8->setIcon(icon11);
        pB_8->setIconSize(QSize(100, 100));
        pB_9 = new QPushButton(centralwidget);
        pB_9->setObjectName(QString::fromUtf8("pB_9"));
        pB_9->setGeometry(QRect(20, 180, 101, 71));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof02.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_9->setIcon(icon12);
        pB_9->setIconSize(QSize(100, 100));
        pB_10 = new QPushButton(centralwidget);
        pB_10->setObjectName(QString::fromUtf8("pB_10"));
        pB_10->setGeometry(QRect(130, 180, 101, 71));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof12.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_10->setIcon(icon13);
        pB_10->setIconSize(QSize(100, 100));
        pB_11 = new QPushButton(centralwidget);
        pB_11->setObjectName(QString::fromUtf8("pB_11"));
        pB_11->setGeometry(QRect(240, 180, 101, 71));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof22.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_11->setIcon(icon14);
        pB_11->setIconSize(QSize(100, 100));
        pB_12 = new QPushButton(centralwidget);
        pB_12->setObjectName(QString::fromUtf8("pB_12"));
        pB_12->setGeometry(QRect(350, 180, 101, 71));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof32.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_12->setIcon(icon15);
        pB_12->setIconSize(QSize(100, 100));
        pB_13 = new QPushButton(centralwidget);
        pB_13->setObjectName(QString::fromUtf8("pB_13"));
        pB_13->setGeometry(QRect(20, 260, 101, 71));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof03.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_13->setIcon(icon16);
        pB_13->setIconSize(QSize(100, 100));
        pB_15 = new QPushButton(centralwidget);
        pB_15->setObjectName(QString::fromUtf8("pB_15"));
        pB_15->setGeometry(QRect(240, 260, 101, 71));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof23.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_15->setIcon(icon17);
        pB_15->setIconSize(QSize(100, 100));
        pB_14 = new QPushButton(centralwidget);
        pB_14->setObjectName(QString::fromUtf8("pB_14"));
        pB_14->setGeometry(QRect(130, 260, 101, 71));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof13.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_14->setIcon(icon18);
        pB_14->setIconSize(QSize(100, 100));
        pB_16 = new QPushButton(centralwidget);
        pB_16->setObjectName(QString::fromUtf8("pB_16"));
        pB_16->setGeometry(QRect(350, 260, 101, 71));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Material Ejercicio 1/dof33.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_16->setIcon(icon19);
        pB_16->setIconSize(QSize(100, 100));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 471, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionCargar);
        toolBar->addAction(actionDesordenar);
        toolBar->addAction(actionAbout);
        toolBar->addAction(actionSalir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCargar->setText(QCoreApplication::translate("MainWindow", "Cargar", nullptr));
        actionDesordenar->setText(QCoreApplication::translate("MainWindow", "Desordenar", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        pB_1->setText(QString());
        pB_2->setText(QString());
        pB_3->setText(QString());
        pB_4->setText(QString());
        pB_5->setText(QString());
        pB_6->setText(QString());
        pB_7->setText(QString());
        pB_8->setText(QString());
        pB_9->setText(QString());
        pB_10->setText(QString());
        pB_11->setText(QString());
        pB_12->setText(QString());
        pB_13->setText(QString());
        pB_15->setText(QString());
        pB_14->setText(QString());
        pB_16->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
