#include "figure.h"

Figure::Figure(QPointF point, QObject *parent)
    :QObject(parent), QGraphicsItem()
{
    this->setStartPoint(point);
    this->setEndPoint(point);
    this->setTransformOriginPoint(boundingRect().center());

    connect(this, SIGNAL(pointChanged()), this, SLOT(updateBounds()));
}

QPointF Figure::startPoint() const
{
    return m_startPoint;
}

QPointF Figure::endPoint() const
{
    return m_endPoint;
}

void Figure::setStartPoint(const QPointF point)
{
    m_startPoint = point;
    emit pointChanged();
}

void Figure::setEndPoint(const QPointF point)
{
    m_endPoint = point;
    emit pointChanged();
}

QPointF Figure::centre()
{
    return QPointF(qAbs(startPoint().x() + endPoint().x()) / 2,
                        qAbs(startPoint().y() + endPoint().y()) / 2);
}

QRectF Figure::boundingRect() const
{
    return QRectF(std::min(startPoint().x(), endPoint().x()) - 40,
                  std::min(startPoint().y(), endPoint().y()) - 40,
                  (qAbs(startPoint().x() - endPoint().x())) + 100,
                  (qAbs(startPoint().y() - endPoint().y())) + 100);
}

void Figure::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

}

void Figure::updateBounds()
{
    this->update(std::min(startPoint().x(), endPoint().x()) - 40,
                 std::min(startPoint().y(), endPoint().y()) - 40,
                 (qAbs(startPoint().x() - endPoint().x())) + 100,
                 (qAbs(startPoint().y() - endPoint().y())) + 100);
    //this->update(boundingRect());
}
