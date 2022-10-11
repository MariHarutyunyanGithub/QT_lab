#ifndef TIME_IS_UP_H
#define TIME_IS_UP_H
#include "start.h"

#include <QDialog>

namespace Ui {
class Time_is_up;
}

class Time_is_up : public QDialog
{
    Q_OBJECT

public:
    explicit Time_is_up(QWidget *parent = nullptr);
    ~Time_is_up();

private slots:
    void on_pushButton_start_clicked();

private:
    Ui::Time_is_up *ui;
    Start *start;
};

#endif // TIME_IS_UP_H
