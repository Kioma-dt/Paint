#include "hexagon.h"

Hexagon::Hexagon(QPointF point, QObject* parent) : Polygon(point, parent) {
    vertices_ = kSix;
}

qreal Hexagon::perimetr() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return (2 * width / 3) +
           (4 * std::sqrt(pow(width / 4, 2)) + pow(height / 2, 2));
}

qreal Hexagon::surface() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());
    return (width * height) - (2 * (width / 4) * (height / 2));
}
