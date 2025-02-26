#include "triangle.h"

Triangle::Triangle(QPointF point, QObject *parent)
    : Figure(point, parent)
{

}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    // int left = std::min(startPoint().x(), endPoint().x());
    // int top = std::min(startPoint().y(), endPoint().y());
    // int right = std::max(startPoint().x(), endPoint().x());
    // int bottom = std::max(startPoint().y(), endPoint().y());


    int left = startPoint().x();
    int top = startPoint().y();
    int right = endPoint().x();
    int bottom = endPoint().y();

    QPolygon pol;
    pol << QPoint((right + left) / 2, top)
        << QPoint(right, bottom)
        << QPoint(left, bottom);
    painter->drawPolygon(pol);
}
