#include "rect.h"

Rect::Rect(QPointF point, QObject *parent)
    :Figure(point, parent)
{

}

qreal Rect::perimetr()
{
    return 2 * M_PI * qAbs(startPoint().x() - endPoint().x());
}

qreal Rect::surface()
{
    return M_PI * pow(qAbs(startPoint().x() - endPoint().x()), 2);
}

void Rect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    painter->drawRect(left,
                       top,
                       width,
                       height);
}
