#include "circle.h"

Circle::Circle(QPointF point, QObject *parent)
    : Figure(point, parent)
{

}

void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int width = qAbs(startPoint().x() - endPoint().x());

    painter->drawEllipse(left,
                        top,
                        width,
                        width);
}
