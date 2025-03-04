#include "rhomb.h"

Rhomb::Rhomb(QPointF point, QObject *parent)
    :Polygon(point, parent)
{
    vertices = 4;
}

qreal Rhomb::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return 4 * std::sqrt(pow(width / 2, 2) + pow(height / 2, 2));
}

qreal Rhomb::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width * height - 2 * (width / 2) * (height / 2);
}
