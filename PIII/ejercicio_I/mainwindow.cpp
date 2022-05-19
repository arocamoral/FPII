#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    srand(time(NULL));

    pulsado=-1;

    boton[0]=ui->pB_1;
    boton[1]=ui->pB_2;
    boton[2]=ui->pB_3;
    boton[3]=ui->pB_4;
    boton[4]=ui->pB_5;
    boton[5]=ui->pB_6;
    boton[6]=ui->pB_7;
    boton[7]=ui->pB_8;
    boton[8]=ui->pB_9;
    boton[9]=ui->pB_10;
    boton[10]=ui->pB_11;
    boton[11]=ui->pB_12;
    boton[12]=ui->pB_13;
    boton[13]=ui->pB_14;
    boton[14]=ui->pB_15;
    boton[15]=ui->pB_16;

    icono[0]=QIcon(":/Material Ejercicio 1/dof00.jpg");
    icono[1]=QIcon(":/Material Ejercicio 1/dof10.jpg");
    icono[2]=QIcon(":/Material Ejercicio 1/dof20.jpg");
    icono[3]=QIcon(":/Material Ejercicio 1/dof30.jpg");
    icono[4]=QIcon(":/Material Ejercicio 1/dof01.jpg");
    icono[5]=QIcon(":/Material Ejercicio 1/dof11.jpg");
    icono[6]=QIcon(":/Material Ejercicio 1/dof21.jpg");
    icono[7]=QIcon(":/Material Ejercicio 1/dof31.jpg");
    icono[8]=QIcon(":/Material Ejercicio 1/dof02.jpg");
    icono[9]=QIcon(":/Material Ejercicio 1/dof12.jpg");
    icono[10]=QIcon(":/Material Ejercicio 1/dof22.jpg");
    icono[11]=QIcon(":/Material Ejercicio 1/dof32.jpg");
    icono[12]=QIcon(":/Material Ejercicio 1/dof03.jpg");
    icono[13]=QIcon(":/Material Ejercicio 1/dof13.jpg");
    icono[14]=QIcon(":/Material Ejercicio 1/dof23.jpg");
    icono[15]=QIcon(":/Material Ejercicio 1/dof33.jpg");

    iconoBoton[0]=0;
    iconoBoton[1]=1;
    iconoBoton[2]=2;
    iconoBoton[3]=3;
    iconoBoton[4]=4;
    iconoBoton[5]=5;
    iconoBoton[6]=6;
    iconoBoton[7]=7;
    iconoBoton[8]=8;
    iconoBoton[9]=9;
    iconoBoton[10]=10;
    iconoBoton[11]=11;
    iconoBoton[12]=12;
    iconoBoton[13]=13;
    iconoBoton[14]=14;
    iconoBoton[15]=15;


    //QMessageBox::information(this,"1","2","3");
    deshacer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pB_1_clicked()
{

    pulsar(0);
}

void MainWindow::on_pB_2_clicked()
{
    pulsar(1);
}

void MainWindow::on_pB_3_clicked()
{
    pulsar(2);
}

void MainWindow::on_pB_4_clicked()
{
    pulsar(3);
}

void MainWindow::on_pB_5_clicked()
{
    pulsar(4);
}

void MainWindow::on_pB_6_clicked()
{
    pulsar(5);
}

void MainWindow::on_pB_7_clicked()
{
    pulsar(6);
}

void MainWindow::on_pB_8_clicked()
{
    pulsar(7);
}

void MainWindow::on_pB_9_clicked()
{
    pulsar(8);
}

void MainWindow::on_pB_10_clicked()
{
    pulsar(9);
}

void MainWindow::on_pB_11_clicked()
{
    pulsar(10);
}

void MainWindow::on_pB_12_clicked()
{
    pulsar(11);
}

void MainWindow::on_pB_13_clicked()
{
    pulsar(12);
}

void MainWindow::on_pB_14_clicked()
{
    pulsar(13);
}

void MainWindow::on_pB_15_clicked()
{
    pulsar(14);
}

void MainWindow::on_pB_16_clicked()
{
    pulsar(15);
}

void MainWindow::pulsar(int a)
{

    if (pulsado==-1 || pulsado==a+1 || pulsado==a-1 || pulsado==a+4 || pulsado==a-4) {
        if (pulsado!=-1)  {
            QSound::play(":/Material Ejercicio 1/correct.wav");
            boton[pulsado]->setEnabled(true);
            int aux=iconoBoton[a];
            iconoBoton[a]=iconoBoton[pulsado];
            iconoBoton[pulsado]=aux;
            boton[a]->setIcon(icono[iconoBoton[a]]);
            boton[pulsado]->setIcon(icono[iconoBoton[pulsado]]);
            pulsado=-1;
            comprobar();
        }else{ //primera pulsacion
            QSound::play(":/Material Ejercicio 1/click.wav");
            pulsado=a;
            boton[a]->setEnabled(false);
        }
    }else{
        QSound::play(":/Material Ejercicio 1/incorrect.wav");
    }
}

void MainWindow::deshacer(){
    for(int i=1;i<256;i++){
        int u=rand()%16;
        int h=rand()%16;
        int aux=iconoBoton[u];
        iconoBoton[u]=iconoBoton[h];
        iconoBoton[h]=aux;
        boton[u]->setIcon(icono[iconoBoton[u]]);
        boton[h]->setIcon(icono[iconoBoton[h]]);
    }
}

void MainWindow::comprobar(){
    bool solucionado=true;
    for(int i=0;i<16;i++){
        if(iconoBoton[i]!=i) solucionado=false;
    }
    if(solucionado==true) QSound::play(":/Material Ejercicio 1/win.wav");
}

void MainWindow::on_actionDesordenar_triggered()
{
    deshacer();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this,"About","Autores de la practica:\n  - Alejandro Rocamora","Ok");
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}
