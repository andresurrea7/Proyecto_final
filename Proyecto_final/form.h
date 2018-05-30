#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    QGraphicsScene* scene;

private slots:
    void on_puntaje_overflow();

private:
    Ui::Form *ui;
};

#endif // FORM_H
