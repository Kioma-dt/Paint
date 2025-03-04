#include "square.h"

Square::Square(QPointF point, QObject *parent)
    : Rect(point, parent)
{
    isSquare = true;
}

qreal Square::perimetr()
{
    int width = qAbs(startPoint().x() - endPoint().x());

    return 4 * width;
}

qreal Square::surface()
{
    int width = qAbs(startPoint().x() - endPoint().x());

    return pow(width, 2);
}


