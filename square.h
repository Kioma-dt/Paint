#ifndef SQUARE_H
#define SQUARE_H

#include "rect.h"

class Square : public Rect
{
public:
    explicit Square(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();
};

#endif // SQUARE_H
