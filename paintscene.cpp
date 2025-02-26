#include "paintscene.h"

PaintScene::PaintScene(QObject *parent)
    :QGraphicsScene(parent)
{}

int PaintScene::typeFigure() const
{
    return m_typeFigure;
}

void PaintScene::setTypeFigure(const int type)
{
    m_typeFigure = type;
}

void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    tempFigure->setEndPoint(event->scenePos());
    this->update(QRectF(0,0,this->width(),this->height()));
}

void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    switch(m_typeFigure){
    case RectType:
    {
        Rect *item = new Rect(event->scenePos());
        tempFigure = item;
        break;
    }
    case RhombType:
    {
        Rhomb *item = new Rhomb(event->scenePos());
        tempFigure = item;
        break;
    }
    case TriangleType:
    {
        Triangle *item = new Triangle(event->scenePos());
        tempFigure = item;
        break;
    }
    case CircleType:
    {
        Circle *item = new Circle(event->scenePos());
        tempFigure = item;
        break;
    }
    case SquareType:
    {
        Square *item = new Square(event->scenePos());
        tempFigure = item;
        break;
    }
    case HexagonType:
    {
        Hexagon *item = new Hexagon(event->scenePos());
        tempFigure = item;
        break;
    }
    default:
    {
        Rect *item = new Rect(event->scenePos());
        //item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    }

    this->addItem(tempFigure);
}

