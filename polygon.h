#ifndef POLYGON_H
#define POLYGON_H

#include "figure.h"

class Polygon : public Figure
{
public:
    explicit Polygon(QPointF point, QObject *parent = 0);


protected:
    QPolygon pol;
    int vertices = 0;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};

#endif // POLYGON_H
