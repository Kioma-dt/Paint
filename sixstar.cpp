#include "sixstar.h"

SixStar::SixStar(QPointF point, QObject *parent)
    :Star(point, parent)
{
    vertices = 6;
}

qreal SixStar::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return 2 * width / 2 + 4 * std::sqrt(pow(3 * width / 4, 2) + pow(height / 2, 2));
}

qreal SixStar::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width * height - 2 * (width / 2) * (height / 2);
}
