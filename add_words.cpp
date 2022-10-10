#include "add_words.h"
#include "ui_add_words.h"

Add_words::Add_words(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_words)
{
    ui->setupUi(this);
}

Add_words::~Add_words()
{
    delete ui;
}

void Add_words::on_pushButton_add_category_clicked()
{

}


void Add_words::on_pushButton_confirm_clicked()
{
    hide();
    category = new Category(this);
    category->show();
}

