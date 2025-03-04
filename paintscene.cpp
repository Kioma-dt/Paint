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

void PaintScene::setMode(const Modes selected)
{
    mode = selected;
}

void PaintScene::updateFigureData(qreal &perimetr, qreal &surface, QPointF &center)
{
    if (tempFigure != nullptr)
    {
        perimetr = tempFigure->perimetr();
        surface = tempFigure->surface();
        center = tempFigure->centre();
    }
}

void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (tempFigure != nullptr)
    {
        switch (mode)
        {
        case MoveMode:
        {
            QPointF delta = event->scenePos() - startMovePoint;
            tempFigure->setStartPoint(tempFigure->startPoint() + delta);
            tempFigure->setEndPoint(tempFigure->endPoint() + delta);
            startMovePoint = event->scenePos();
            this->update(QRectF(0,0,this->width(),this->height()));
            break;
        }
        case ResizeMode:
        {
            // qreal currentAngle = std::atan2(event->scenePos().x(), event->scenePos().y()) * 180 / M_PI;
            // qreal delta = startAngle - currentAngle;
            // tempFigure->setRotation(tempFigure->rotation() + delta);
            // startAngle = currentAngle;
            // break;
            QPointF delta = event->scenePos() - startMovePoint;
            tempFigure->setStartPoint(tempFigure->startPoint() - delta);
            tempFigure->setEndPoint(tempFigure->endPoint() + delta);
            startMovePoint = event->scenePos();
            this->update(QRectF(0,0,this->width(),this->height()));
            break;
        }
        case DrawMode:
        {
            tempFigure->setEndPoint(event->scenePos());
            this->update(QRectF(0,0,this->width(),this->height()));
            break;
        }
        }
    }
}

void PaintScene::mouseReleaseEvent(QGraphicsSceneMouseEvent &event)
{
    // tempFigure = nullptr;
}

void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    switch (mode)
    {
    case MoveMode:
    {
        startMovePoint = event->scenePos();
        tempFigure = qgraphicsitem_cast<Figure *>(itemAt(startMovePoint, QTransform()));
        break;
    }
    case ResizeMode:
    {
        //startAngle = std::atan2(event->scenePos().x(), event->scenePos().y()) * 180 / M_PI;
        startMovePoint = event->scenePos();
        tempFigure = qgraphicsitem_cast<Figure *>(itemAt(startMovePoint, QTransform()));
        break;
    }
    case DrawMode:
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
        case PentagonType:
        {
            Pentagon *item = new Pentagon(event->scenePos());
            tempFigure = item;
            break;
        }
        case FiveStarType:
        {
            FiveStar *item = new FiveStar(event->scenePos());
            tempFigure = item;
            break;
        }
        case SixStarType:
        {
            SixStar *item = new SixStar(event->scenePos());
            tempFigure = item;
            break;
        }
        case EightStarType:
        {
            EightStar *item = new EightStar(event->scenePos());
            tempFigure = item;
            break;
        }
        default:
        {
            Rect *item = new Rect(event->scenePos());
            tempFigure = item;
            break;
        }
        }

        this->addItem(tempFigure);
        break;
    }
    }
}

