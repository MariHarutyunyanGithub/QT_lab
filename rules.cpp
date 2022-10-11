#include "rules.h"
#include "ui_rules.h"

Rules::Rules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rules)
{
    ui->setupUi(this);
}

Rules::~Rules()
{
    delete ui;
}




void Rules::on_pushButton_clicked()
{
    QDialog::reject();
    //close();
    //hide();
}

