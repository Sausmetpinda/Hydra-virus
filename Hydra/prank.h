#ifndef PRANK_H
#define PRANK_H

#include <QDialog>

namespace Ui {
class prank;
}

class prank : public QDialog
{
    Q_OBJECT

public:
    explicit prank(QWidget *parent = nullptr);
    ~prank();

private:
    Ui::prank *ui;
    void closeEvent(QCloseEvent *event);
};


#endif // PRANK_H
