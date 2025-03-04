#ifndef SIXSTAR_H
#define SIXSTAR_H

#include "star.h"

class SixStar : public Star
{
public:
    explicit SixStar(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();
};

#endif // SIXSTAR_H
