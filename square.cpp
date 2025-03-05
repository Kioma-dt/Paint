#include "square.h"

Square::Square(QPointF point, QObject* parent) : Rect(point, parent) {
    isSquare_ = true;
}

qreal Square::perimetr() {
    qreal width = qAbs(startPoint().x() - endPoint().x());

    return 4 * width;
}

qreal Square::surface() {
    qreal width = qAbs(startPoint().x() - endPoint().x());

    return pow(width, 2);
}
