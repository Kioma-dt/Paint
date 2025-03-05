#ifndef EIGHTSTAR_H
#define EIGHTSTAR_H

#include "star.h"

class EightStar : public Star {
   public:
    explicit EightStar(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};
#endif	// EIGHTSTAR_H
