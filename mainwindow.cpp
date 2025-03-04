#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timerResizeWindow = new QTimer(this);
    connect(timerResizeWindow, &QTimer::timeout, this, &MainWindow::timerResizeSlot);
    timerUpdateData = new QTimer(this);
    connect(timerUpdateData, &QTimer::timeout, this, &MainWindow::timerUpdateDataSlot);

    scene = new PaintScene;
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    timerResizeWindow->start(100);
    timerUpdateData->start(100);

    connect(ui->radioButtonRectangle, &QRadioButton::clicked, this, &MainWindow::buttonRectClick);
    connect(ui->radioButtonRhomb, &QRadioButton::clicked, this, &MainWindow::buttonRhombClick);
    connect(ui->radioButtonTriangle, &QRadioButton::clicked, this, &MainWindow::buttonTriangleClick);
    connect(ui->radioButtonCircle, &QRadioButton::clicked, this, &MainWindow::buttonCircleClick);
    connect(ui->radioButtonSquare, &QRadioButton::clicked, this, &MainWindow::buttonSquareClick);
    connect(ui->radioButtonHexagon, &QRadioButton::clicked, this, &MainWindow::buttonHexagonClick);
    connect(ui->radioButtonPentagon, &QRadioButton::clicked, this, &MainWindow::buttonPentagonClick);
    connect(ui->radioButtonFiveStar, &QRadioButton::clicked, this, &MainWindow::buttonFiveStarClick);
    connect(ui->radioButtonSixStar, &QRadioButton::clicked, this, &MainWindow::buttonSixStarClick);
    connect(ui->radioButtonEightStar, &QRadioButton::clicked, this, &MainWindow::buttonEightStarClick);

    connect(ui->radioButtonDraw, &QRadioButton::clicked, this, &MainWindow::buttonDrawClick);
    connect(ui->radioButtonMove, &QRadioButton::clicked, this, &MainWindow::buttonMoveClick);
    connect(ui->radioButtonResize, &QRadioButton::clicked, this, &MainWindow::buttonResizeClick);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerResizeSlot()
{
    timerResizeWindow->stop();
    scene->setSceneRect(0, 0, ui->graphicsView->width(), ui->graphicsView->height());
}

void MainWindow::timerUpdateDataSlot()
{
    scene->updateFigureData(perimetr, surface, center);
    ui->labelPerimetr->setText(QString::number(perimetr, 'f', 2));
    ui->labelSurface->setText(QString::number(surface, 'f', 2));
    ui->labelCentre->setText(QString::number(center.x(), 'f', 0) + " " + QString::number(center.y(), 'f', 0));
}

void MainWindow::buttonRectClick()
{
    scene->setTypeFigure(RectType);
}

void MainWindow::buttonRhombClick()
{
    scene->setTypeFigure(RhombType);
}

void MainWindow::buttonTriangleClick()
{
    scene->setTypeFigure(TriangleType);
}

void MainWindow::buttonCircleClick()
{
    scene->setTypeFigure(CircleType);
}

void MainWindow::buttonSquareClick()
{
    scene->setTypeFigure(SquareType);
}

void MainWindow::buttonHexagonClick()
{
    scene->setTypeFigure(HexagonType);
}

void MainWindow::buttonPentagonClick()
{
    scene->setTypeFigure(PentagonType);
}

void MainWindow::buttonFiveStarClick()
{
    scene->setTypeFigure(FiveStarType);
}

void MainWindow::buttonSixStarClick()
{
    scene->setTypeFigure(SixStarType);
}

void MainWindow::buttonEightStarClick()
{
    scene->setTypeFigure(EightStarType);
}

void MainWindow::buttonDrawClick()
{
    scene->setMode(DrawMode);
}

void MainWindow::buttonMoveClick()
{
    scene->setMode(MoveMode);
}

void MainWindow::buttonResizeClick()
{
    scene->setMode(ResizeMode);
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    scene->setSceneRect(0,0,ui->graphicsView->width(),ui->graphicsView->height());
    QMainWindow::resizeEvent(event);
}
