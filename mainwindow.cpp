#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) ,
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();

    QDateTime dateTime=QDateTime::currentDateTime();
    QString datetimetext=dateTime.toString();
    ui->DateTime->setText(datetimetext);
}

void MainWindow::showTime()
{
    QTime time=QTime::currentTime();

     QString time_text = time.toString("hh:mm:ss");

    if ((time.second()%2) == 0)
    {
       time_text[2] = ' ';
       time_text[5] = ' ';
    }

    ui->Digital_clock->setText(time_text);
}
MainWindow::~MainWindow()
{
    delete ui;
}


