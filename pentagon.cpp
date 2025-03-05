#include "pentagon.h"

Pentagon::Pentagon(QPointF point, QObject *parent)
    :Polygon(point, parent)
{
    vertices = 5;
}

qreal Pentagon::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width / 2 + 2 * std::sqrt(pow(width / 4, 2) + pow(2 * height / 3, 2))
                    + 2 * std::sqrt(pow(width / 2, 2) + pow(height / 3, 2));
}

qreal Pentagon::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width * height - (width / 4) *( 2 * height / 3)
                        - (width / 2) * (height / 3);
}
