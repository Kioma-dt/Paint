#ifndef RECT_H
#define RECT_H

#include "figure.h"

class Rect : public Figure
{
    Q_OBJECT
public:
    explicit Rect(QPointF point, QObject *parent = 0);

    qreal perimetr();
    qreal surface();

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    bool isSquare = false;
};

#endif // RECT_H
