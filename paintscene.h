#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QTransform>
#include <QtMath>
#include "figure.h"
#include "rhomb.h"
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include "hexagon.h"
#include "pentagon.h"
#include "fivestar.h"
#include "sixstar.h"
#include "eightstar.h"


enum FigureTypes{RectType, RhombType, TriangleType, CircleType, SquareType, HexagonType, PentagonType, FiveStarType, SixStarType, EightStarType};
enum Modes{DrawMode, MoveMode, RotateMode, ResizeMode};

class PaintScene : public QGraphicsScene
{
    Q_OBJECT

    Q_PROPERTY(int typeFigure
                   READ typeFigure WRITE setTypeFigure
                       NOTIFY typeFigureChanged)
public:
    explicit PaintScene(QObject *parent = 0);
    int typeFigure() const;
    void setTypeFigure(const int type);
    void setMode(const Modes selected);
    void updateFigureData(qreal& perimetr, qreal& surface, QPointF& center);

private:
    int m_typeFigure;
    Figure *tempFigure = nullptr;
    bool moveMode = false;
    QPointF startMovePoint;
    qreal startAngle;
    Modes mode = DrawMode;

signals:
    void typeFigureChanged();

private:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent &event);
};

#endif // PAINTSCENE_H
