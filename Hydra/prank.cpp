#include "prank.h"
#include "ui_prank.h"
#include "mainwindow.h"
#include <QCloseEvent>
#include <cstdlib>
#include <ctime>

prank::prank(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prank)
{
    ui->setupUi(this);
    this->setFixedSize(200,50);
}

prank::~prank()
{
    delete ui;
}

void prank::closeEvent (QCloseEvent *event)
{
    srand(time(NULL));

    event->ignore();
    for (int i = 0; i < 2; i++) {
        prank *p = new prank;
        p->setGeometry(rand() % 1921, rand() % 1080, 20, 20);
        p->show();
    }
}
