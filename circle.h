#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure {
   public:
    explicit Circle(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;

   private:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
               QWidget* widget) override;
};

#endif	// CIRCLE_H
