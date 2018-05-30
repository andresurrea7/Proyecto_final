#ifndef OBJETOS_H
#define OBJETOS_H

#include <QObject>

class objetos : public QObject
{
    Q_OBJECT
public:
    explicit objetos(QObject *parent = nullptr);

signals:

public slots:
};

#endif // OBJETOS_H