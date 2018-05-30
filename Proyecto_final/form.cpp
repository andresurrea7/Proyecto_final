#include "form.h"
#include "ui_form.h"
#include <QGraphicsView>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    //ui->graphicsView->setScene(scene);
}

Form::~Form()
{
    delete ui;
}

void Form::on_puntaje_overflow()
{

}
