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

void MainWindow::resizeEvent(QResizeEvent *event)
{
    scene->setSceneRect(0,0,ui->graphicsView->width(),ui->graphicsView->height());
    QMainWindow::resizeEvent(event);
}

