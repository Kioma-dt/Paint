#include "fivestar.h"

FiveStar::FiveStar(QPointF point, QObject *parent)
    :Star(point, parent)
{
    vertices = 5;
}

qreal FiveStar::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width / 3 + 2 * std::sqrt(pow(2 * width / 3, 2) + pow(height / 2, 2))
           + 2 * std::sqrt(pow(width / 2, 2) + pow(2 * height / 2, 2));
}

qreal FiveStar::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width * height - width / 2 * height / 2;
}
