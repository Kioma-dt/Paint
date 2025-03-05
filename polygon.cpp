#include "polygon.h"

Polygon::Polygon(QPointF point, QObject* parent) : Figure(point, parent) {
    parent = nullptr;
}

void Polygon::paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
                    QWidget* widget) {
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int right = std::max(startPoint().x(), endPoint().x());
    int bottom = std::max(startPoint().y(), endPoint().y());

    pol_.clear();


    if (vertices_ == kThree) {
        left = startPoint().x();
        top = startPoint().y();
        right = endPoint().x();
        bottom = endPoint().y();
        pol_ << QPoint((right + left) / 2, top) << QPoint(right, bottom)
             << QPoint(left, bottom);
    }


    if (vertices_ == kFour) {
        pol_ << QPoint((right + left) / 2, top)
             << QPoint(right, (bottom + top) / 2)
             << QPoint((right + left) / 2, bottom)
             << QPoint(left, (bottom + top) / 2);
    }


    if (vertices_ == kFive) {
        left = startPoint().x();
        top = startPoint().y();
        right = endPoint().x();
        bottom = endPoint().y();
        pol_ << QPoint((right + left) / 2, top)
             << QPoint(right, (bottom + 2 * top) / 3)
             << QPoint((3 * right + left) / 4, bottom)
             << QPoint((right + 3 * left) / 4, bottom)
             << QPoint(left, (bottom + 2 * top) / 3);
    }


    if (vertices_ == kSix) {
        pol_ << QPoint((right + 3 * left) / 4, top)
             << QPoint((3 * right + left) / 4, top)
             << QPoint(right, (bottom + top) / 2)
             << QPoint((3 * right + left) / 4, bottom)
             << QPoint((right + 3 * left) / 4, bottom)
             << QPoint(left, (bottom + top) / 2);
    }

    painter->drawPolygon(pol_);
}
