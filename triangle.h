#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon {
   public:
    explicit Triangle(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};

#endif	// TRIANGLE_H
