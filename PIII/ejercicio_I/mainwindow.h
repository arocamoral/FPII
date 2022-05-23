#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QIcon>
#include <QMessageBox>
#include <QSound>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pB_1_clicked();

    void on_pB_2_clicked();

    void on_pB_3_clicked();

    void on_pB_4_clicked();

    void on_pB_5_clicked();

    void on_pB_6_clicked();

    void on_pB_7_clicked();

    void on_pB_8_clicked();

    void on_pB_9_clicked();

    void on_pB_10_clicked();

    void on_pB_11_clicked();

    void on_pB_12_clicked();

    void on_pB_13_clicked();

    void on_pB_14_clicked();

    void on_pB_15_clicked();

    void on_pB_16_clicked();

    void deshacer();

    void comprobar();

    void on_actionDesordenar_triggered();

    void on_actionAbout_triggered();

    void on_actionSalir_triggered();

private:
    Ui::MainWindow *ui;
    QPushButton *boton[16];
    QIcon icono[16];
    void pulsar(int);
    int pulsado;
    int iconoBoton[16];

};
#endif // MAINWINDOW_H


//Estas opciones ser n accesibles tanto por el men£ como por la barra de herramientas del programa: escribir arriba
//hacer codigo de felicitacion
