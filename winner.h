#ifndef WINNER_H
#define WINNER_H

#include <QDialog>
#include "exit.h"

namespace Ui {
class Winner;
}

class Winner : public QDialog
{
    Q_OBJECT

public:
    explicit Winner(QWidget *parent = nullptr);
    ~Winner();

private slots:
    void on_pushButton_exit_2_clicked();

private:
    Ui::Winner *ui;
    Exit *exit;
};

#endif // WINNER_H
