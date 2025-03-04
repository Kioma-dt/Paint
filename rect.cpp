#include "rect.h"

Rect::Rect(QPointF point, QObject *parent)
    :Figure(point, parent)
{

}

qreal Rect::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return 2 * (width + height);
}

qreal Rect::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width * height;
}

void Rect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    if (isSquare)
    {
        height = width;
    }

    painter->drawRect(left,
                       top,
                       width,
                       height);
}
