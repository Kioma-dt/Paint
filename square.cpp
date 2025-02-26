#include "square.h"

Square::Square(QPointF point, QObject *parent)
    : Figure(point, parent)
{

}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int width = qAbs(startPoint().x() - endPoint().x());

    painter->drawRect(left,
                    top,
                    width,
                    width);
}


