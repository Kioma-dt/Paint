#ifndef SQUARE_H
#define SQUARE_H

#include "rect.h"

class Square : public Rect {
   public:
    explicit Square(QPointF point, QObject* parent = nullptr);

    qreal perimetr() override;
    qreal surface() override;
};

#endif	// SQUARE_H
