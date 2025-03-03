#include "circle.h"

Circle::Circle(QPointF point, QObject *parent)
    : Figure(point, parent)
{

}

qreal Circle::perimetr()
{
    return 2 * M_PI * qAbs(startPoint().x() - endPoint().x());
}

qreal Circle::surface()
{
    return M_PI * pow(qAbs(startPoint().x() - endPoint().x()), 2);
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
