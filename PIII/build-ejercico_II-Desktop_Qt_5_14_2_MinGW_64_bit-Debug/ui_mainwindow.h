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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionEscala_de_grises;
    QAction *actionHorizontal;
    QAction *actionVertical;
    QAction *actionSalir;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuNuevo;
    QMenu *menuEditar;
    QMenu *menuDerivadas;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Material Ejercicio 2/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon);
        actionEscala_de_grises = new QAction(MainWindow);
        actionEscala_de_grises->setObjectName(QString::fromUtf8("actionEscala_de_grises"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Material Ejercicio 2/bw.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEscala_de_grises->setIcon(icon1);
        actionHorizontal = new QAction(MainWindow);
        actionHorizontal->setObjectName(QString::fromUtf8("actionHorizontal"));
        actionHorizontal->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Material Ejercicio 2/horizontal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorizontal->setIcon(icon2);
        actionVertical = new QAction(MainWindow);
        actionVertical->setObjectName(QString::fromUtf8("actionVertical"));
        actionVertical->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Material Ejercicio 2/vertical.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVertical->setIcon(icon3);
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionSalir->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Material Ejercicio 2/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuNuevo = new QMenu(menubar);
        menuNuevo->setObjectName(QString::fromUtf8("menuNuevo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuDerivadas = new QMenu(menuEditar);
        menuDerivadas->setObjectName(QString::fromUtf8("menuDerivadas"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuNuevo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuNuevo->addAction(actionAbrir);
        menuNuevo->addAction(actionSalir);
        menuEditar->addAction(actionEscala_de_grises);
        menuEditar->addAction(menuDerivadas->menuAction());
        menuDerivadas->addAction(actionHorizontal);
        menuDerivadas->addAction(actionVertical);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionEscala_de_grises);
        toolBar->addAction(actionHorizontal);
        toolBar->addAction(actionVertical);
        toolBar->addAction(actionSalir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionEscala_de_grises->setText(QCoreApplication::translate("MainWindow", "Escala de grises", nullptr));
        actionHorizontal->setText(QCoreApplication::translate("MainWindow", "Horizontal", nullptr));
        actionVertical->setText(QCoreApplication::translate("MainWindow", "Vertical", nullptr));
        actionSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        menuNuevo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuDerivadas->setTitle(QCoreApplication::translate("MainWindow", "Derivadas", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
