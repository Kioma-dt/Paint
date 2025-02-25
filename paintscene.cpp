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
    default:{
        Rect *item = new Rect(event->scenePos());
        //item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    }

    this->addItem(tempFigure);
}

