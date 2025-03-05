#include "triangle.h"

Triangle::Triangle(QPointF point, QObject* parent) : Polygon(point, parent) {
    vertices_ = kThree;
}

qreal Triangle::perimetr() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return width + (2 * std::sqrt(pow(width / 2, 2)) + pow(height, 2));
}

qreal Triangle::surface() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return width * (height / 2) / 2;
}
