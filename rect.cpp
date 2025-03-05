#include "rect.h"

Rect::Rect(QPointF point, QObject* parent) : Figure(point, parent) {
    parent = nullptr;
}

qreal Rect::perimetr() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return 2 * (width + height);
}

qreal Rect::surface() {
    qreal width = qAbs(startPoint().x() - endPoint().x());
    qreal height = qAbs(startPoint().y() - endPoint().y());

    return width * height;
}

void Rect::paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
                 QWidget* widget) {
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int width = qAbs(startPoint().x() - endPoint().x());
    int height = qAbs(startPoint().y() - endPoint().y());


    if (isSquare_) {
        height = width;
    }

    painter->drawRect(left, top, width, height);
}
