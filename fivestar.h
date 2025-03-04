#ifndef FIVESTAR_H
#define FIVESTAR_H

#include "star.h"

class FiveStar : public Star
{
public:
    explicit FiveStar(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();
};

#endif // FIVESTAR_H
