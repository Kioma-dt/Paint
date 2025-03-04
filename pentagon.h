#ifndef PENTAGON_H
#define PENTAGON_H

#include "polygon.h"

class Pentagon : public Polygon
{
public:
    explicit Pentagon(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();
};

#endif // PENTAGON_H
