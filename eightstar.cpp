#include "eightstar.h"

EightStar::EightStar(QPointF point, QObject* parent) : Star(point, parent) {
    vertices_ = kEight;
}

qreal EightStar::perimetr() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return ((4 * std::sqrt(pow(width, 2))) + pow(height / 2, 2));
}

qreal EightStar::surface() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return (width * height) - ((2 * width / 2) * (height / 4));
}
