#ifndef PENTAGON_H
#define PENTAGON_H

#include "polygon.h"

class Pentagon : public Polygon {
   public:
    explicit Pentagon(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};

#endif	// PENTAGON_H
