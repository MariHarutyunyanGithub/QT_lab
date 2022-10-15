#include "time_is_up.h"
#include "ui_time_is_up.h"

Time_is_up::Time_is_up(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Time_is_up)
{
    ui->setupUi(this);
}

Time_is_up::~Time_is_up()
{
    delete ui;
}

//if (time_is_up) {
//    Start* start = new Start(this);
//    start->hide();
//    }

void Time_is_up::on_pushButton_start_clicked()
{
    hide();
    start = new Start(this);
    start->show();
}

