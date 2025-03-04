#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon
{
public:
    explicit Triangle(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();
};

#endif // TRIANGLE_H
