#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QTransform>
#include <QtMath>
#include "circle.h"
#include "eightstar.h"
#include "figure.h"
#include "fivestar.h"
#include "hexagon.h"
#include "pentagon.h"
#include "rhomb.h"
#include "sixstar.h"
#include "square.h"
#include "triangle.h"


enum FigureTypes {
    kRectType,
    kRhombType,
    kTriangleType,
    kCircleType,
    kSquareType,
    kHexagonType,
    kPentagonType,
    kFiveStarType,
    kSixStarType,
    kEightStarType
};
enum Modes { kDrawMode, kMoveMode, kResizeMode };

class PaintScene : public QGraphicsScene {
    Q_OBJECT

    Q_PROPERTY(int typeFigure READ typeFigure WRITE setTypeFigure NOTIFY
                   typeFigureChanged)
   public:
    explicit PaintScene(QObject* parent = nullptr);
    int typeFigure() const;
    void setTypeFigure(const int type);
    void setMode(const Modes selected);
    void updateFigureData(qreal& perimetr, qreal& surface, QPointF& center);

   private:
    int m_typeFigure_;
    Figure* tempFigure_ = nullptr;
    bool moveMode_ = false;
    QPointF startMovePoint_;
    qreal startAngle_;
    Modes mode_ = kDrawMode;

   signals:
    void typeFigureChanged();

   private:
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
};

#endif	// PAINTSCENE_H
