#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::timerSlot);

    scene = new PaintScene;
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    timer->start(100);

    connect(ui->buttonRect, &QPushButton::clicked, this, &MainWindow::buttonRectClick);
    connect(ui->buttonRhomb, &QPushButton::clicked, this, &MainWindow::buttonRhombClick);
    connect(ui->buttonTriangle, &QPushButton::clicked, this, &MainWindow::buttonTriangleClick);
    connect(ui->buttonCircle, &QPushButton::clicked, this, &MainWindow::buttonCircleClick);
    connect(ui->buttonSquare, &QPushButton::clicked, this, &MainWindow::buttonSquareClick);
    connect(ui->buttonHexagon, &QPushButton::clicked, this, &MainWindow::buttonHexagonClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerSlot()
{
    timer->stop();
    scene->setSceneRect(0, 0, ui->graphicsView->width(), ui->graphicsView->height());
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

void MainWindow::resizeEvent(QResizeEvent *event)
{
    scene->setSceneRect(0,0,ui->graphicsView->width(),ui->graphicsView->height());
    QMainWindow::resizeEvent(event);
}


