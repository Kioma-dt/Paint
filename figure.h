#ifndef FIGURE_H
#define FIGURE_H

#include <QGraphicsItem>
#include <QObject>
#include <QPointF>
#include <QPainter>
#include <QPolygon>
#include <QGraphicsSceneMouseEvent>

class Figure : public QObject, public QGraphicsItem
{
    Q_OBJECT

    Q_PROPERTY(QPointF startPoint
                   READ startPoint WRITE setStartPoint
                       NOTIFY pointChanged)
    Q_PROPERTY(QPointF endPoint
                   READ endPoint WRITE setEndPoint
                       NOTIFY pointChanged)
public:
    explicit Figure(QPointF point, QObject *parent = 0);

    QPointF startPoint() const;
    QPointF endPoint() const;

    void setStartPoint(const QPointF point);
    void setEndPoint(const QPointF point);

    QPointF centre();
    virtual qreal perimetr() = 0;
    virtual qreal surface() = 0;

signals:
    void pointChanged();

private:
    QPointF m_startPoint;
    QPointF m_endPoint;

    QRectF boundingRect() const override;

    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

public slots:
    void updateBounds();
};

#endif // FIGURE_H
