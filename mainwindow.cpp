#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui_(new ui::MainWindow) {
    ui_->setupUi(this);

    timerResizeWindow_ = new QTimer(this);
    connect(timerResizeWindow_, &QTimer::timeout, this,
            &MainWindow::timerResizeSlot);
    timerUpdateData_ = new QTimer(this);
    connect(timerUpdateData_, &QTimer::timeout, this,
            &MainWindow::timerUpdateDataSlot);

    scene_ = new PaintScene;
    ui_->graphicsView->setScene(scene_);
    ui_->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui_->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    timerResizeWindow_->start(baseTime_);
    timerUpdateData_->start(baseTime_);

    connect(ui_->radioButtonRectangle, &QRadioButton::clicked, this,
            &MainWindow::buttonRectClick);
    connect(ui_->radioButtonRhomb, &QRadioButton::clicked, this,
            &MainWindow::buttonRhombClick);
    connect(ui_->radioButtonTriangle, &QRadioButton::clicked, this,
            &MainWindow::buttonTriangleClick);
    connect(ui_->radioButtonCircle, &QRadioButton::clicked, this,
            &MainWindow::buttonCircleClick);
    connect(ui_->radioButtonSquare, &QRadioButton::clicked, this,
            &MainWindow::buttonSquareClick);
    connect(ui_->radioButtonHexagon, &QRadioButton::clicked, this,
            &MainWindow::buttonHexagonClick);
    connect(ui_->radioButtonPentagon, &QRadioButton::clicked, this,
            &MainWindow::buttonPentagonClick);
    connect(ui_->radioButtonFiveStar, &QRadioButton::clicked, this,
            &MainWindow::buttonFiveStarClick);
    connect(ui_->radioButtonSixStar, &QRadioButton::clicked, this,
            &MainWindow::buttonSixStarClick);
    connect(ui_->radioButtonEightStar, &QRadioButton::clicked, this,
            &MainWindow::buttonEightStarClick);

    connect(ui_->radioButtonDraw, &QRadioButton::clicked, this,
            &MainWindow::buttonDrawClick);
    connect(ui_->radioButtonMove, &QRadioButton::clicked, this,
            &MainWindow::buttonMoveClick);
    connect(ui_->radioButtonResize, &QRadioButton::clicked, this,
            &MainWindow::buttonResizeClick);
}

MainWindow::~MainWindow() {
    delete ui_;
}

void MainWindow::timerResizeSlot() {
    timerResizeWindow_->stop();
    scene_->setSceneRect(0, 0, ui_->graphicsView->width(),
                         ui_->graphicsView->height());
}

void MainWindow::timerUpdateDataSlot() {
    scene_->updateFigureData(perimetr_, surface_, center_);
    ui_->labelPerimetr->setText(QString::number(perimetr_, 'f', 2));
    ui_->labelSurface->setText(QString::number(surface_, 'f', 2));
    ui_->labelCentre->setText(QString::number(center_.x(), 'f', 0) + " " +
                              QString::number(center_.y(), 'f', 0));
}

void MainWindow::buttonRectClick() {
    scene_->setTypeFigure(kRectType);
}

void MainWindow::buttonRhombClick() {
    scene_->setTypeFigure(kRhombType);
}

void MainWindow::buttonTriangleClick() {
    scene_->setTypeFigure(kTriangleType);
}

void MainWindow::buttonCircleClick() {
    scene_->setTypeFigure(kCircleType);
}

void MainWindow::buttonSquareClick() {
    scene_->setTypeFigure(kSquareType);
}

void MainWindow::buttonHexagonClick() {
    scene_->setTypeFigure(kHexagonType);
}

void MainWindow::buttonPentagonClick() {
    scene_->setTypeFigure(kPentagonType);
}

void MainWindow::buttonFiveStarClick() {
    scene_->setTypeFigure(kFiveStarType);
}

void MainWindow::buttonSixStarClick() {
    scene_->setTypeFigure(kSixStarType);
}

void MainWindow::buttonEightStarClick() {
    scene_->setTypeFigure(kEightStarType);
}

void MainWindow::buttonDrawClick() {
    scene_->setMode(kDrawMode);
}

void MainWindow::buttonMoveClick() {
    scene_->setMode(kMoveMode);
}

void MainWindow::buttonResizeClick() {
    scene_->setMode(kResizeMode);
}

void MainWindow::resizeEvent(QResizeEvent* event) {
    scene_->setSceneRect(0, 0, ui_->graphicsView->width(),
                         ui_->graphicsView->height());
    QMainWindow::resizeEvent(event);
}
