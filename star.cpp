#include "star.h"

Star::Star(QPointF point, QObject* parent) : Figure(point, parent) {
    parent = nullptr;
}

void Star::paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
                 QWidget* widget) {
    QPen pen(Qt::black, 2);
    painter->setPen(pen);

    int left = std::min(startPoint().x(), endPoint().x());
    int top = std::min(startPoint().y(), endPoint().y());
    int right = std::max(startPoint().x(), endPoint().x());
    int bottom = std::max(startPoint().y(), endPoint().y());

    pol_.clear();


    if (vertices_ == kFive) {
        left = startPoint().x();
        top = startPoint().y();
        right = endPoint().x();
        bottom = endPoint().y();
        pol_ << QPoint((right + left) / 2, top)
             << QPoint((3 * right + 2 * left) / Five_, (bottom + 2 * top) / 3)
             << QPoint(right, (bottom + 2 * top) / 3)
             << QPoint((Thirteen_ * right + Seven_ * left) / (4 * Five_),
                       (Thirteen_ * bottom + Seven_ * top) / (4 * Five_))
             << QPoint((3 * right + left) / 4, bottom)
             << QPoint((right + left) / 2, (4 * bottom + top) / Five_)
             << QPoint((right + 3 * left) / 4, bottom)
             << QPoint((Seven_ * right + Thirteen_ * left) / (4 * Five_),
                       (Thirteen_ * bottom + Seven_ * top) / (4 * Five_))
             << QPoint(left, (bottom + 2 * top) / 3)
             << QPoint((2 * right + 3 * left) / Five_, (bottom + 2 * top) / 3);
    }


    if (vertices_ == kSix) {

        pol_ << QPoint((right + 3 * left) / 4, top)
             << QPoint((right + left) / 2, (4 * top + bottom) / Five_)
             << QPoint((3 * right + left) / 4, top)
             << QPoint((Seven_ * right + 3 * left) / (2 * Five_),
                       (Seven_ * top + 3 * bottom) / (2 * Five_))
             << QPoint(right, (bottom + top) / 2)
             << QPoint((Seven_ * right + 3 * left) / (2 * Five_),
                       (3 * top + Seven_ * bottom) / (2 * Five_))
             << QPoint((3 * right + left) / 4, bottom)
             << QPoint((right + left) / 2, (top + 4 * bottom) / Five_)
             << QPoint((right + 3 * left) / 4, bottom)
             << QPoint((3 * right + Seven_ * left) / (2 * Five_),
                       (3 * top + Seven_ * bottom) / (2 * Five_))
             << QPoint(left, (bottom + top) / 2)
             << QPoint((3 * right + Seven_ * left) / (2 * Five_),
                       (Seven_ * top + 3 * bottom) / (2 * Five_));
    }


    if (vertices_ == kEight) {
        pol_ << QPoint((right + left) / 2, top)
             << QPoint((4 * right + 3 * left) / Seven_,
                       (Seven_ * top + 3 * bottom) / (2 * Five_))
             << QPoint((Seventeen_ * right + 3 * left) / (4 * Five_),
                       (Seventeen_ * top + 3 * bottom) / (4 * Five_))
             << QPoint((Seven_ * right + 3 * left) / (2 * Five_),
                       (Eleven_ * top + Nine_ * bottom) / (4 * Five_))
             << QPoint(right, (bottom + top) / 2)
             << QPoint((Seven_ * right + 3 * left) / (2 * Five_),
                       (Nine_ * top + Eleven_ * bottom) / (4 * Five_))
             << QPoint((Seventeen_ * right + 3 * left) / (4 * Five_),
                       (3 * top + Seventeen_ * bottom) / (4 * Five_))
             << QPoint((4 * right + 3 * left) / Seven_,
                       (3 * top + Seven_ * bottom) / (2 * Five_))
             << QPoint((right + left) / 2, bottom)
             << QPoint((3 * right + 4 * left) / Seven_,
                       (3 * top + Seven_ * bottom) / (2 * Five_))
             << QPoint((3 * right + Seventeen_ * left) / (4 * Five_),
                       (3 * top + Seventeen_ * bottom) / (4 * Five_))
             << QPoint((3 * right + Seven_ * left) / (2 * Five_),
                       (Nine_ * top + Eleven_ * bottom) / (4 * Five_))
             << QPoint(left, (bottom + top) / 2)
             << QPoint((3 * right + Seven_ * left) / (2 * Five_),
                       (Eleven_ * top + Nine_ * bottom) / (4 * Five_))
             << QPoint((3 * right + Seventeen_ * left) / (4 * Five_),
                       (Seventeen_ * top + 3 * bottom) / (4 * Five_))
             << QPoint((3 * right + 4 * left) / Seven_,
                       (Seven_ * top + 3 * bottom) / (2 * Five_));
    }

    painter->drawPolygon(pol_);
}
