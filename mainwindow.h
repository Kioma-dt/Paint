#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <QResizeEvent>
#include <QTimer>
#include "paintscene.h"

QT_BEGIN_NAMESPACE
namespace ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {

   public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

   private:
    const int baseTime_ = 100;
    ui::MainWindow* ui_;
    QTimer* timerResizeWindow_;
    QTimer* timerUpdateData_;
    PaintScene* scene_;
    qreal perimetr_ = 0;
    qreal surface_ = 0;
    QPointF center_ = QPointF(0, 0);

   private slots:
    void timerResizeSlot();
    void timerUpdateDataSlot();

    void buttonRectClick();
    void buttonRhombClick();
    void buttonTriangleClick();
    void buttonCircleClick();
    void buttonSquareClick();
    void buttonHexagonClick();
    void buttonPentagonClick();
    void buttonFiveStarClick();
    void buttonSixStarClick();
    void buttonEightStarClick();

    void buttonDrawClick();
    void buttonMoveClick();
    void buttonResizeClick();

   private:
    void resizeEvent(QResizeEvent* event);
};
#endif	// MAINWINDOW_H
