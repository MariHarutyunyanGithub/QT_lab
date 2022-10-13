#include "category.h"
#include "ui_category.h"

Category::Category(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Category)
{
    ui->setupUi(this);    

    QString text;
    text = ui->lineEdit_word->text();
    ui->word_1->setText(QString(text));
    category_vector.push_back(text);
}

Category::~Category()
{
    delete ui;
}

void Category::on_back_to_categories_clicked()
{
    hide();
}

