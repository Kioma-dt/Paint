#ifndef HEXAGON_H
#define HEXAGON_H

#include "polygon.h"

class Hexagon : public Polygon
{
public:
    explicit Hexagon(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();
};

#endif // HEXAGON_H
