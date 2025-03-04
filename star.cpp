#include "star.h"

Star::Star(QPointF point, QObject *parent)
    :Figure(point, parent)
{

}

void Star::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int right = std::max(startPoint().x(), endPoint().x());
    int bottom = std::max(startPoint().y(), endPoint().y());

    pol.clear();

    if(vertices == 5)
    {
        left = startPoint().x();
        top = startPoint().y();
        right = endPoint().x();
        bottom = endPoint().y();
        pol << QPoint((right + 2 * left) / 3, top)
            << QPoint((right + left) / 2, (13 * top + 7 * bottom) / 20)
            << QPoint((2 * right + left) / 3, top)
            << QPoint((3 * right + 2 * left) / 5, (3 * top + 2 * bottom) / 5)
            << QPoint(right, (bottom + top) / 2)
            << QPoint((3 * right + 2 * left) / 5, (2 * top + 3 * bottom) / 5)
            << QPoint((right + left) / 2, bottom)
            << QPoint((2 * right + 3 * left) / 5, (2 * top + 3 * bottom) / 5)
            << QPoint(left, (bottom + top) / 2)
            << QPoint((2 * right + 3 * left) / 5, (3 * top + 2 * bottom) / 5);
    }
    if (vertices == 6)
    {

        pol << QPoint((right + 3 * left) / 4, top)
            << QPoint((right + left) / 2, (4 * top + bottom) / 5)
            << QPoint((3 * right + left) / 4, top)
            << QPoint((7 * right + 3 * left) / 10, (7 * top + 3 * bottom) / 10)
            << QPoint(right, (bottom + top) / 2)
            << QPoint((7 * right + 3 * left) / 10, (3 * top + 7 * bottom) / 10)
            << QPoint((3 * right + left) / 4, bottom)
            << QPoint((right + left) / 2, (top + 4 * bottom) / 5)
            << QPoint((right + 3 * left) / 4, bottom)
            << QPoint((3 * right + 7 * left) / 10, (3 * top + 7 * bottom) / 10)
            << QPoint(left, (bottom + top) / 2)
            << QPoint((3 * right + 7 * left) / 10, (7 * top + 3 * bottom) / 10);
    }
    if (vertices == 8)
    {
        pol << QPoint((right + left) / 2, top)
            << QPoint((4 * right + 3 * left) / 7, (7 * top + 3 * bottom) / 10)
            << QPoint((17 * right + 3 * left) / 20, (17 * top + 3 * bottom) / 20)
            << QPoint((7 * right + 3 * left) / 10, (11 * top + 9 * bottom) / 20)
            << QPoint(right, (bottom + top) / 2)
            << QPoint((7 * right + 3 * left) / 10, (9 * top + 11 * bottom) / 20)
            << QPoint((17 * right + 3 * left) / 20, (3 * top + 17 * bottom) / 20)
            << QPoint((4 * right + 3 * left) / 7, (3 * top + 7 * bottom) / 10)
            << QPoint((right + left) / 2, bottom)
            << QPoint((3 * right + 4 * left) / 7, (3 * top + 7 * bottom) / 10)
            << QPoint((3 * right + 17 * left) / 20, (3 * top + 17 * bottom) / 20)
            << QPoint((3 * right + 7 * left) / 10, (9 * top + 11 * bottom) / 20)
            << QPoint(left, (bottom + top) / 2)
            << QPoint((3 * right + 7 * left) / 10, (11 * top + 9 * bottom) / 20)
            << QPoint((3 * right + 17 * left) / 20, (17 * top + 3 * bottom) / 20)
            << QPoint((3 * right + 4 * left) / 7, (7 * top + 3 * bottom) / 10);
    }

    painter->drawPolygon(pol);
}
