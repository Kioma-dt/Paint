#include "triangle.h"

Triangle::Triangle(QPointF point, QObject *parent)
    : Polygon(point, parent)
{
    vertices = 3;
}

qreal Triangle::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width + 2 * std::sqrt(pow(width / 2, 2) + pow(height, 2));
}

qreal Triangle::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width * (height / 2) / 2;
}
