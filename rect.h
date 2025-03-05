#ifndef RECT_H
#define RECT_H

#include "figure.h"

class Rect : public Figure {
    Q_OBJECT
   public:
    explicit Rect(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;

   protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
               QWidget* widget) override;
    bool isSquare_ = false;
};

#endif	// RECT_H
