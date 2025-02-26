#include "rhomb.h"

Rhomb::Rhomb(QPointF point, QObject *parent)
    :Figure(point, parent)
{

}

void Rhomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int right = std::max(startPoint().x(), endPoint().x());
    int bottom = std::max(startPoint().y(), endPoint().y());

    QPolygon pol;
    pol << QPoint((right + left) / 2, top)
        << QPoint(right, (bottom + top) / 2)
        << QPoint((right + left) / 2, bottom)
        << QPoint(left, (bottom + top) / 2);
    painter->drawPolygon(pol);
}
