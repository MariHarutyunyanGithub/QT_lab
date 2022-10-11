#include "exit.h"
#include "ui_exit.h"

Exit::Exit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Exit)
{
    ui->setupUi(this);
}

Exit::~Exit()
{
    delete ui;
}

void Exit::on_pushButton_no_clicked()
{
    hide();
}


void Exit::on_pushButton_yes_clicked()
{
    exit(EXIT_FAILURE);
}

