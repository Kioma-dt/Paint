#ifndef POLYGON_H
#define POLYGON_H

#include "figure.h"

class Polygon : public Figure {
   public:
    explicit Polygon(QPointF point, QObject* parent = nullptr);

   protected:
    QPolygon pol_;
    enum Vertices { kThree, kFour, kFive, kSix } vertices_;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
               QWidget* widget) override;
};

#endif	// POLYGON_H
