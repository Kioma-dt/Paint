#include "rect.h"

Rect::Rect(QPointF point, QObject *parent)
    :Figure(point, parent)
{

}

void Rect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);
    painter->drawRect((startPoint().x() < endPoint().x() ? startPoint().x() : endPoint().x()),
                       (startPoint().y() < endPoint().y() ? startPoint().y() : endPoint().y()),
                       (qAbs(startPoint().x() - endPoint().x())),
                       (qAbs(startPoint().y() - endPoint().y())));
}
