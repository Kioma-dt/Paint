#include "hexagon.h"

Hexagon::Hexagon(QPointF point, QObject *parent)
    : Figure(point, parent)
{

}

qreal Hexagon::perimetr()
{
    return 2 * M_PI * qAbs(startPoint().x() - endPoint().x());
}

qreal Hexagon::surface()
{
    return M_PI * pow(qAbs(startPoint().x() - endPoint().x()), 2);
}

void Hexagon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int right = std::max(startPoint().x(), endPoint().x());
    int bottom = std::max(startPoint().y(), endPoint().y());

    QPolygon pol;
    pol << QPoint((right + 3 * left) / 4, top)
        << QPoint((3 * right + left) / 4, top)
        << QPoint(right, (bottom + top) / 2)
        << QPoint((3 * right + left) / 4, bottom)
        << QPoint((right + 3 * left) / 4, bottom)
        << QPoint(left, (bottom + top) / 2);
    painter->drawPolygon(pol);
}
