#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QResizeEvent>
#include <QPushButton>
#include <QRadioButton>
#include <QLabel>
#include "paintscene.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *timerResizeWindow;
    QTimer *timerUpdateData;
    PaintScene *scene;
    qreal perimetr = 0;
    qreal surface = 0;
    QPointF center = QPointF(0, 0);

private slots:
    void timerResizeSlot();
    void timerUpdateDataSlot();
    void buttonRectClick();
    void buttonRhombClick();
    void buttonTriangleClick();
    void buttonCircleClick();
    void buttonSquareClick();
    void buttonHexagonClick();
    void buttonDrawClick();
    void buttonMoveClick();
    void buttonResizeClick();

private:
    void resizeEvent(QResizeEvent* event);

};
#endif // MAINWINDOW_H
