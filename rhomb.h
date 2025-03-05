#ifndef RHOMB_H
#define RHOMB_H

#include "polygon.h"

class Rhomb : public Polygon {
   public:
    explicit Rhomb(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};

#endif	// RHOMB_H
