/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Digital_clock;
    QLabel *DateTime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(597, 512);
        QFont font;
        font.setFamilies({QString::fromUtf8("French Script MT")});
        font.setPointSize(22);
        font.setItalic(false);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Digital_clock = new QLabel(centralwidget);
        Digital_clock->setObjectName("Digital_clock");
        Digital_clock->setGeometry(QRect(80, 90, 241, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("French Script MT")});
        font1.setPointSize(29);
        font1.setItalic(false);
        Digital_clock->setFont(font1);
        DateTime = new QLabel(centralwidget);
        DateTime->setObjectName("DateTime");
        DateTime->setGeometry(QRect(70, 225, 301, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("French Script MT")});
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setItalic(false);
        DateTime->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 597, 38));
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
        Digital_clock->setText(QCoreApplication::translate("MainWindow", "CLOCK", nullptr));
        DateTime->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
