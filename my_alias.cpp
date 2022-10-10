#include "my_alias.h"
#include "ui_my_alias.h"

My_Alias::My_Alias(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::My_Alias)
{
    ui->setupUi(this);
}

My_Alias::~My_Alias()
{
    delete ui;
}


void My_Alias::on_pushButton_alias_clicked()
{
    hide();
    home = new Home(this);
    home->show();
}

