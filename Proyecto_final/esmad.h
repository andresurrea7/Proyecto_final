#ifndef ESMAD_H
#define ESMAD_H

#include <QObject>

class esmad : public QObject
{
    Q_OBJECT
public:
    explicit esmad(QObject *parent = nullptr);

signals:

public slots:
};

#endif // ESMAD_H