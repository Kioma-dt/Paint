#ifndef FIVESTAR_H
#define FIVESTAR_H

#include "star.h"

class FiveStar : public Star {
   public:
    explicit FiveStar(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};

#endif	// FIVESTAR_H
