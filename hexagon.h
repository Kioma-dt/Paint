#ifndef HEXAGON_H
#define HEXAGON_H

#include "polygon.h"

class Hexagon : public Polygon {
   public:
    explicit Hexagon(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};

#endif	// HEXAGON_H
