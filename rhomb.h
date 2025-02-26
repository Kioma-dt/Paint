#ifndef RHOMB_H
#define RHOMB_H

#include "figure.h"

class Rhomb : public Figure
{
public:
    explicit Rhomb(QPointF point, QObject *parent = 0);

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};

#endif // RHOMB_H
