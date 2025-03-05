#include "rhomb.h"

Rhomb::Rhomb(QPointF point, QObject* parent) : Polygon(point, parent) {
    vertices_ = kFour;
}

qreal Rhomb::perimetr() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return ((4 * std::sqrt(pow(width / 2, 2))) + pow(height / 2, 2));
}

qreal Rhomb::surface() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return (width * height) - (2 * (width / 2) * (height / 2));
}
