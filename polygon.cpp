#include "polygon.h"

Polygon::Polygon(QPointF point, QObject *parent)
    :Figure(point, parent)
{

}

void Polygon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int right = std::max(startPoint().x(), endPoint().x());
    int bottom = std::max(startPoint().y(), endPoint().y());

    pol.clear();
    if (vertices == 3)
    {
        left = startPoint().x();
        top = startPoint().y();
        right = endPoint().x();
        bottom = endPoint().y();
        pol << QPoint((right + left) / 2, top)
            << QPoint(right, bottom)
            << QPoint(left, bottom);
    }
    if (vertices == 4)
    {
        pol << QPoint((right + left) / 2, top)
            << QPoint(right, (bottom + top) / 2)
            << QPoint((right + left) / 2, bottom)
            << QPoint(left, (bottom + top) / 2);
    }
    if (vertices == 5)
    {
        left = startPoint().x();
        top = startPoint().y();
        right = endPoint().x();
        bottom = endPoint().y();
        pol << QPoint((right + 2 * left) / 3, top)
            << QPoint((2 * right + left) / 3, top)
            << QPoint(right, (bottom + top) / 2)
            << QPoint((right + left) / 2, bottom)
            << QPoint(left, (bottom + top) / 2);
    }
    if (vertices == 6)
    {
        pol << QPoint((right + 3 * left) / 4, top)
            << QPoint((3 * right + left) / 4, top)
            << QPoint(right, (bottom + top) / 2)
            << QPoint((3 * right + left) / 4, bottom)
            << QPoint((right + 3 * left) / 4, bottom)
            << QPoint(left, (bottom + top) / 2);
    }

    painter->drawPolygon(pol);
}


