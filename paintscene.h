#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "figure.h"
#include "rect.h"

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

    enum FigureTypes{RectType, RhombType, TriangleType};

private:
    int m_typeFigure;
    Figure *tempFigure;

signals:
    void typeFigureChanged();

private:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // PAINTSCENE_H
