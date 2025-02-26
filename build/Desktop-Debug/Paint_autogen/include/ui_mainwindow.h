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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *buttonRect;
    QPushButton *buttonCircle;
    QPushButton *buttonTriangle;
    QPushButton *buttonRhomb;
    QGraphicsView *graphicsView;
    QPushButton *buttonSquare;
    QPushButton *buttonHexagon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(581, 501);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        buttonRect = new QPushButton(centralwidget);
        buttonRect->setObjectName("buttonRect");

        gridLayout->addWidget(buttonRect, 3, 1, 1, 1);

        buttonCircle = new QPushButton(centralwidget);
        buttonCircle->setObjectName("buttonCircle");

        gridLayout->addWidget(buttonCircle, 4, 1, 1, 1);

        buttonTriangle = new QPushButton(centralwidget);
        buttonTriangle->setObjectName("buttonTriangle");

        gridLayout->addWidget(buttonTriangle, 2, 1, 1, 1);

        buttonRhomb = new QPushButton(centralwidget);
        buttonRhomb->setObjectName("buttonRhomb");

        gridLayout->addWidget(buttonRhomb, 2, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 0, 0, 1, 2);

        buttonSquare = new QPushButton(centralwidget);
        buttonSquare->setObjectName("buttonSquare");

        gridLayout->addWidget(buttonSquare, 3, 0, 1, 1);

        buttonHexagon = new QPushButton(centralwidget);
        buttonHexagon->setObjectName("buttonHexagon");

        gridLayout->addWidget(buttonHexagon, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 581, 23));
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
        buttonRect->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        buttonCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        buttonTriangle->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        buttonRhomb->setText(QCoreApplication::translate("MainWindow", "Rhomb", nullptr));
        buttonSquare->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        buttonHexagon->setText(QCoreApplication::translate("MainWindow", "Hexagon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
