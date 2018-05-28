#include "interfaz.h"
#include "ui_interfaz.h"
#include <QMediaPlayer>
#include <QFileDialog>


interfaz::interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interfaz)
{
    ui->setupUi(this);
    mMediaPlayer = new QMediaPlayer(this);

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
    QString filename= QFileDialog::getOpenFileName(this,"Abrir");
    if(filename.isEmpty()){
        return;
    }
    mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));
    //on_play_clicked();
    mMediaPlayer->play();
}
