#ifndef FIGURE_H
#define FIGURE_H

#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QObject>
#include <QPainter>
#include <QPointF>
#include <QPolygon>

class Figure : public QObject, public QGraphicsItem {
    Q_OBJECT

    Q_PROPERTY(QPointF startPoint READ startPoint WRITE setStartPoint NOTIFY
                   pointChanged)
    Q_PROPERTY(
        QPointF endPoint READ endPoint WRITE setEndPoint NOTIFY pointChanged)
   public:
    explicit Figure(QPointF point, QObject* parent = nullptr);

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
    QPointF m_startPoint_;
    QPointF m_endPoint_;

    QRectF boundingRect() const override;

   public slots:
    void updateBounds();

   protected:
    const int Five_ = 5;
    const int Seven_ = 7;
    const int Nine_ = 9;
    const int Eleven_ = 11;
    const int Thirteen_ = 13;
    const int Seventeen_ = 17;
};

#endif	// FIGURE_H
