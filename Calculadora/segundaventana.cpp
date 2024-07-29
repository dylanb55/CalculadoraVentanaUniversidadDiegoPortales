#include "segundaventana.h"
#include "ui_segundaventana.h"
#include "QDesktopServices"
SegundaVentana::SegundaVentana(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SegundaVentana)
{
    ui->setupUi(this);
    ui->git->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->git->setOpenExternalLinks(true);
    ui->git->setTextFormat(Qt::RichText);
    ui->git->setText("<a href=\"https://github.com/dylanb55\">GitHub!</a>");

    QPixmap pix("C:/Users/Dylan/Desktop/CalculadoraVentanaUDP/git.png");
    ui->Imagen->setPixmap(pix);
}

SegundaVentana::~SegundaVentana()
{
    delete ui;
}





