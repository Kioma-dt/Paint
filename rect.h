#ifndef RECT_H
#define RECT_H

#include "figure.h"

class Rect : public Figure
{
    Q_OBJECT
public:
    explicit Rect(QPointF point, QObject *parent = 0);

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};

#endif // RECT_H
