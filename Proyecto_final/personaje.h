#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>

class personaje : public QObject
{
    Q_OBJECT
private:
    int x;
    int y;
    int fuerza;
public:
    explicit personaje(QObject *parent = nullptr);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    int getFuerza() const;
    void setFuerza(int value);

signals:

public slots:
};

#endif // PERSONAJE_H
