#include "eightstar.h"

EightStar::EightStar(QPointF point, QObject *parent)
    :Star(point, parent)
{
    vertices = 8;
}

qreal EightStar::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return 4 * std::sqrt(pow(width, 2) + pow(height / 2, 2));
}

qreal EightStar::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());

    return width * height - 2 * (width / 2) * (height / 4);
}
