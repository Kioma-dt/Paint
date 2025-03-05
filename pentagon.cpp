#include "pentagon.h"

Pentagon::Pentagon(QPointF point, QObject* parent) : Polygon(point, parent) {
    vertices_ = kFive;
}

qreal Pentagon::perimetr() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return (width / 2) +
           (2 * std::sqrt(pow(width / 4, 2)) + pow(2 * height / 3, 2)) +
           (2 * std::sqrt(pow(width / 2, 2)) + pow(height / 3, 2));
}

qreal Pentagon::surface() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return (width * height) - ((width / 4) * (2 * height / 3)) -
           ((width / 2) * (height / 3));
}
