#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QResizeEvent>
#include <QPushButton>
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
    QTimer *timer;
    PaintScene *scene;

private slots:
    void timerSlot();
    void buttonRectClick();
    void buttonRhombClick();
    void buttonTriangleClick();
    void buttonCircleClick();
    void buttonSquareClick();
    void buttonHexagonClick();

private:
    void resizeEvent(QResizeEvent* event);

};
#endif // MAINWINDOW_H
