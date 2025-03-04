#ifndef STAR_H
#define STAR_H

#include "figure.h"

class Star : public Figure
{
public:
    explicit Star(QPointF point, QObject *parent = 0);


protected:
    QPolygon pol;
    int vertices = 0;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};

#endif // STAR_H
