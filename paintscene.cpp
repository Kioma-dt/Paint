#include "paintscene.h"

PaintScene::PaintScene(QObject* parent) : QGraphicsScene(parent) {
    parent = nullptr;
}

int PaintScene::typeFigure() const {
    return m_typeFigure_;
}

void PaintScene::setTypeFigure(const int type) {
    m_typeFigure_ = type;
}

void PaintScene::setMode(const Modes selected) {
    mode_ = selected;
}

void PaintScene::updateFigureData(qreal& perimetr, qreal& surface,
                                  QPointF& center) {


    if (tempFigure_ != nullptr) {
        perimetr = tempFigure_->perimetr();
        surface = tempFigure_->surface();
        center = tempFigure_->centre();
    }
}

void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent* event) {


    if (tempFigure_ != nullptr) {
        switch (mode_) {
            case kMoveMode: {
                QPointF delta = event->scenePos() - startMovePoint_;
                tempFigure_->setStartPoint(tempFigure_->startPoint() + delta);
                tempFigure_->setEndPoint(tempFigure_->endPoint() + delta);
                startMovePoint_ = event->scenePos();
                this->update(QRectF(0, 0, this->width(), this->height()));
                break;
            }
            case kResizeMode: {
                // qreal currentAngle = std::atan2(event->scenePos().x(), event->scenePos().y()) * 180 / M_PI;
                // qreal delta = startAngle - currentAngle;
                // tempFigure->setRotation(tempFigure->rotation() + delta);
                // startAngle = currentAngle;
                // break;
                QPointF delta = event->scenePos() - startMovePoint_;
                tempFigure_->setStartPoint(tempFigure_->startPoint() - delta);
                tempFigure_->setEndPoint(tempFigure_->endPoint() + delta);
                startMovePoint_ = event->scenePos();
                this->update(QRectF(0, 0, this->width(), this->height()));
                break;
            }
            case kDrawMode: {
                tempFigure_->setEndPoint(event->scenePos());
                this->update(QRectF(0, 0, this->width(), this->height()));
                break;
            }
        }
    }
}

void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent* event) {


    switch (mode_) {
        case kMoveMode:
        case kResizeMode: {
            //startAngle = std::atan2(event->scenePos().x(), event->scenePos().y()) * 180 / M_PI;
            startMovePoint_ = event->scenePos();
            tempFigure_ = qgraphicsitem_cast<Figure*>(
                itemAt(startMovePoint_, QTransform()));
            break;
        }
        case kDrawMode: {


            switch (m_typeFigure_) {
                case kRectType: {
                    auto item = new Rect(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kRhombType: {
                    auto item = new Rhomb(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kTriangleType: {
                    auto item = new Triangle(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kCircleType: {
                    auto item = new Circle(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kSquareType: {
                    auto item = new Square(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kHexagonType: {
                    auto item = new Hexagon(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kPentagonType: {
                    auto item = new Pentagon(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kFiveStarType: {
                    auto item = new FiveStar(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kSixStarType: {
                    auto item = new SixStar(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                case kEightStarType: {
                    auto item = new EightStar(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
                default: {
                    auto item = new Rect(event->scenePos());
                    tempFigure_ = item;
                    break;
                }
            }

            this->addItem(tempFigure_);
            break;
        }
    }
}
