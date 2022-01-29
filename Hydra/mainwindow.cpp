#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "prank.h"
#include <QCloseEvent>
#include <cstdlib>
#include <ctime>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(200,50);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent (QCloseEvent *event)
{
    srand(time(NULL));

    event->ignore();
    for (int i = 0; i < 2; i++) {
        prank *p = new prank;
        p->setGeometry(rand() % 1921, rand() % 1080, 20, 20);
        p->show();
    }
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "haha", "haha no");
    for (int i = 0; i < 6; i++) {
        prank *p = new prank;
        p->setGeometry(rand() % 1921, rand() % 1080, 20, 20);
        p->show();
    }
}

