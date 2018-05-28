#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <QMainWindow>


namespace Ui {
class interfaz;
}
class QMediaPlayer;
class interfaz : public QMainWindow
{
    Q_OBJECT

public:
    explicit interfaz(QWidget *parent = 0);

    ~interfaz();


private slots:


    void on_amigo_clicked();

    void on_puntaje_clicked();

    void on_bye_clicked();

    void on_nuevo_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::interfaz *ui;
    QMediaPlayer *mMediaPlayer;
};

#endif // INTERFAZ_H
