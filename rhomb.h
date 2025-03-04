#ifndef RHOMB_H
#define RHOMB_H

#include "polygon.h"

class Rhomb : public Polygon
{
public:
    explicit Rhomb(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();

};

#endif // RHOMB_H
