#ifndef STAR_H
#define STAR_H

#include "figure.h"

class Star : public Figure {
   public:
    explicit Star(QPointF point, QObject* parent = nullptr);


   protected:
    QPolygon pol_;
    enum Vertices { kFive, kSix, kEight } vertices_;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
               QWidget* widget) override;
};

#endif	// STAR_H
