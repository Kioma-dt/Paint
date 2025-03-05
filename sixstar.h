#ifndef SIXSTAR_H
#define SIXSTAR_H

#include "star.h"

class SixStar : public Star {
   public:
    explicit SixStar(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};

#endif	// SIXSTAR_H
