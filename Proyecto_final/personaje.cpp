#include "personaje.h"

int personaje::getX() const
{
    return x;
}

void personaje::setX(int value)
{
    x = value;
}

int personaje::getY() const
{
    return y;
}

void personaje::setY(int value)
{
    y = value;
}

int personaje::getFuerza() const
{
    return fuerza;
}

void personaje::setFuerza(int value)
{
    fuerza = value;
}

personaje::personaje(QObject *parent) : QObject(parent)
{

}
