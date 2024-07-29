#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "segundaventana.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boton_clicked()
{
    float estudiantes_totales;
    float posicion_academica;
    float resultado;
    bool ayudante;
    QString ventana;
    estudiantes_totales = ui->totalEstudiantes->text().toFloat();
    posicion_academica = ui->posicionAcademica->text().toFloat();

    resultado = ((posicion_academica)/(estudiantes_totales))*100;


    if(resultado >= 0 && resultado <= 5){
        ayudante = true;
        ventana = "Tu ventana es A1";
        ui->resultado->setText(ventana);
    }

    else if(resultado > 5 && resultado <= 10){
        ayudante = true;
        ventana = "Tu ventana es A2";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 10 && resultado <= 15){
        ayudante = true;
        ventana = "Tu ventana es A3";
        ui->resultado->setText(ventana);
    }

    else if(resultado > 15 && resultado <= 20){
        ayudante = true;
        ventana = "Tu ventana es A4";
        ui->resultado->setText(ventana);
    }

    else if(resultado > 20 && resultado <= 25){
        ayudante = true;
        ventana = "Tu ventana es A5";
        ui->resultado->setText(ventana);
    }

    else if(resultado > 25 && resultado <= 30){
        ayudante = true;
        ventana = "Tu ventana es B1";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 30 && resultado <= 35){
        ayudante = true;
        ventana = "Tu ventana es B2";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 35 && resultado <= 40){
        ayudante = true;
        ventana = "Tu ventana es B3";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 40 && resultado <= 45){
        ayudante = true;
        ventana = "Tu ventana es B4";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 45 && resultado <= 50){
        ayudante = true;
        ventana = "Tu ventana es B5";
        ui->resultado->setText(ventana);
    }

    else if(resultado > 50 && resultado <= 55){
        ayudante = false;
        ventana = "Tu ventana es C1";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 55 && resultado < 60){
        ayudante = false;
        ventana = "Tu ventana es C2";
        ui->resultado->setText(ventana);

    }
    else if(resultado > 60 && resultado <= 65){
        ayudante = false;
        ventana = "Tu ventana es C3";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 65 && resultado <= 70){
        ayudante = false;
        ventana = "Tu ventana es C4";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 70 && resultado <= 75){
        ayudante = false;
        ventana = "Tu ventana es C5";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 75 && resultado <= 80){
        ayudante = false;
        ventana = "Tu ventana es D1";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 80 && resultado <= 85){
        ayudante = false;
        ventana = "Tu ventana es D2";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 85 && resultado <= 90){
        ayudante = false;
        ventana = "Tu ventana es D3";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 90 && resultado <= 95){
        ayudante = false;
        ventana = "Tu ventana es D4";
        ui->resultado->setText(ventana);
    }
    else if(resultado > 95 && resultado <= 100){
        ayudante = false;
        ventana = "Tu ventana es D5";
        ui->resultado->setText(ventana);
    }

    else{
        QMessageBox::warning(this,"Informacion", "Datos Incorrectos, vuelva a intentarlo");
    }

    if(ayudante){
        ui->ayudante->setText("SI");
    }
    else{
        ui->ayudante->setText("NO");
    }

}


void MainWindow::on_pushButton_clicked()
{

    SegundaVentana* ventana = new SegundaVentana(this);
    ventana->show();

}

