#include "figure.h"

Figure::Figure(QPointF point, QObject* parent)
    : QObject(parent), QGraphicsItem() {
    this->setStartPoint(point);
    this->setEndPoint(point);

    connect(this, SIGNAL(pointChanged()), this, SLOT(updateBounds()));
}

QPointF Figure::startPoint() const {
    return m_startPoint_;
}

QPointF Figure::endPoint() const {
    return m_endPoint_;
}

void Figure::setStartPoint(const QPointF point) {
    m_startPoint_ = point;
    emit pointChanged();
}

void Figure::setEndPoint(const QPointF point) {
    m_endPoint_ = point;
    emit pointChanged();
}

QPointF Figure::centre() {
    return QPointF(qAbs(startPoint().x() + endPoint().x()) / 2,
                   qAbs(startPoint().y() + endPoint().y()) / 2);
}

QRectF Figure::boundingRect() const {
    return QRectF(std::min(startPoint().x(), endPoint().x()),
                  std::min(startPoint().y(), endPoint().y()),
                  (qAbs(startPoint().x() - endPoint().x())),
                  (qAbs(startPoint().y() - endPoint().y())));
}

void Figure::updateBounds() {
    this->update(std::min(startPoint().x(), endPoint().x()),
                 std::min(startPoint().y(), endPoint().y()),
                 (qAbs(startPoint().x() - endPoint().x())),
                 (qAbs(startPoint().y() - endPoint().y())));
}
