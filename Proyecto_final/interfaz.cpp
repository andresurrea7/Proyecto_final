#include "interfaz.h"
#include "ui_interfaz.h"
#include <QMediaPlayer>
#include <QFileDialog>
#include <iostream>

using namespace std;


interfaz::interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interfaz)
{
    ui->setupUi(this);
    QMediaPlayer *musica = new QMediaPlayer();
    musica->setMedia(QUrl(":/Down Whit The Sickness.mp3"));
    musica->play();
    //cout<<"esto se fue a la verga"<<endl;
}

interfaz::~interfaz()
{
    delete ui;
}



void interfaz::on_amigo_clicked()
{

}


void interfaz::on_puntaje_clicked()
{

}

void interfaz::on_bye_clicked()
{

}

void interfaz::on_nuevo_clicked()
{

}



void interfaz::on_pushButton_3_clicked()
{

}

void interfaz::on_pushButton_clicked()
{

}
