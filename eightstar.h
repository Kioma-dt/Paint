#ifndef EIGHTSTAR_H
#define EIGHTSTAR_H

#include "star.h"

class EightStar : public Star
{
public:
    explicit EightStar(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();
};
#endif // EIGHTSTAR_H
