/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonRectangle;
    QRadioButton *radioButtonSquare;
    QRadioButton *radioButtonTriangle;
    QRadioButton *radioButtonRhomb;
    QRadioButton *radioButtonPentagon;
    QRadioButton *radioButtonHexagon;
    QRadioButton *radioButtonCircle;
    QRadioButton *radioButtonFiveStar;
    QRadioButton *radioButtonSixStar;
    QRadioButton *radioButtonEightStar;
    QLabel *label;
    QLabel *labelPerimetr;
    QLabel *label_3;
    QLabel *labelSurface;
    QLabel *label_5;
    QLabel *labelCentre;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonDraw;
    QRadioButton *radioButtonMove;
    QRadioButton *radioButtonResize;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(747, 475);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 10, 461, 291));
        verticalGroupBox = new QGroupBox(centralwidget);
        verticalGroupBox->setObjectName("verticalGroupBox");
        verticalGroupBox->setGeometry(QRect(490, 80, 141, 221));
        verticalGroupBox->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(verticalGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        radioButtonRectangle = new QRadioButton(verticalGroupBox);
        radioButtonRectangle->setObjectName("radioButtonRectangle");
        radioButtonRectangle->setChecked(true);

        verticalLayout->addWidget(radioButtonRectangle);

        radioButtonSquare = new QRadioButton(verticalGroupBox);
        radioButtonSquare->setObjectName("radioButtonSquare");

        verticalLayout->addWidget(radioButtonSquare);

        radioButtonTriangle = new QRadioButton(verticalGroupBox);
        radioButtonTriangle->setObjectName("radioButtonTriangle");

        verticalLayout->addWidget(radioButtonTriangle);

        radioButtonRhomb = new QRadioButton(verticalGroupBox);
        radioButtonRhomb->setObjectName("radioButtonRhomb");

        verticalLayout->addWidget(radioButtonRhomb);

        radioButtonPentagon = new QRadioButton(verticalGroupBox);
        radioButtonPentagon->setObjectName("radioButtonPentagon");

        verticalLayout->addWidget(radioButtonPentagon);

        radioButtonHexagon = new QRadioButton(verticalGroupBox);
        radioButtonHexagon->setObjectName("radioButtonHexagon");

        verticalLayout->addWidget(radioButtonHexagon);

        radioButtonCircle = new QRadioButton(verticalGroupBox);
        radioButtonCircle->setObjectName("radioButtonCircle");

        verticalLayout->addWidget(radioButtonCircle);

        radioButtonFiveStar = new QRadioButton(verticalGroupBox);
        radioButtonFiveStar->setObjectName("radioButtonFiveStar");

        verticalLayout->addWidget(radioButtonFiveStar);

        radioButtonSixStar = new QRadioButton(verticalGroupBox);
        radioButtonSixStar->setObjectName("radioButtonSixStar");

        verticalLayout->addWidget(radioButtonSixStar);

        radioButtonEightStar = new QRadioButton(verticalGroupBox);
        radioButtonEightStar->setObjectName("radioButtonEightStar");

        verticalLayout->addWidget(radioButtonEightStar);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 310, 91, 31));
        labelPerimetr = new QLabel(centralwidget);
        labelPerimetr->setObjectName("labelPerimetr");
        labelPerimetr->setGeometry(QRect(120, 310, 81, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 310, 81, 31));
        labelSurface = new QLabel(centralwidget);
        labelSurface->setObjectName("labelSurface");
        labelSurface->setGeometry(QRect(300, 310, 81, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(390, 310, 91, 31));
        labelCentre = new QLabel(centralwidget);
        labelCentre->setObjectName("labelCentre");
        labelCentre->setGeometry(QRect(490, 310, 81, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(481, 9, 141, 58));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        radioButtonDraw = new QRadioButton(layoutWidget);
        radioButtonDraw->setObjectName("radioButtonDraw");
        radioButtonDraw->setChecked(true);

        gridLayout->addWidget(radioButtonDraw, 0, 0, 1, 1);

        radioButtonMove = new QRadioButton(layoutWidget);
        radioButtonMove->setObjectName("radioButtonMove");

        gridLayout->addWidget(radioButtonMove, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        radioButtonResize = new QRadioButton(layoutWidget);
        radioButtonResize->setObjectName("radioButtonResize");

        gridLayout_2->addWidget(radioButtonResize, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 747, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        radioButtonRectangle->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        radioButtonSquare->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        radioButtonTriangle->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        radioButtonRhomb->setText(QCoreApplication::translate("MainWindow", "Rhomb", nullptr));
        radioButtonPentagon->setText(QCoreApplication::translate("MainWindow", "Pentagon", nullptr));
        radioButtonHexagon->setText(QCoreApplication::translate("MainWindow", "Hexagon", nullptr));
        radioButtonCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        radioButtonFiveStar->setText(QCoreApplication::translate("MainWindow", "5-point Star", nullptr));
        radioButtonSixStar->setText(QCoreApplication::translate("MainWindow", "6-point Star", nullptr));
        radioButtonEightStar->setText(QCoreApplication::translate("MainWindow", "8-point Star", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200: ", nullptr));
        labelPerimetr->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214: ", nullptr));
        labelSurface->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\274\320\260\321\201\321\201", nullptr));
        labelCentre->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        radioButtonDraw->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        radioButtonMove->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        radioButtonResize->setText(QCoreApplication::translate("MainWindow", "Resize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
