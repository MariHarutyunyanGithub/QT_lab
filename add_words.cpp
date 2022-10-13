#include "add_words.h"
#include "ui_add_words.h"

Add_words::Add_words(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_words)
{
    ui->setupUi(this);

    connect(ui->toolButton_animals, SIGNAL(clicked()), this, SLOT(categories()));
    connect(ui->toolButton_countries, SIGNAL(clicked()), this, SLOT(categories()));
    connect(ui->toolButton_flowers, SIGNAL(clicked()), this, SLOT(categories()));
    connect(ui->toolButton_foods, SIGNAL(clicked()), this, SLOT(categories()));
    connect(ui->toolButton_people, SIGNAL(clicked()), this, SLOT(categories()));
    connect(ui->toolButton_verbs, SIGNAL(clicked()), this, SLOT(categories()));

    ui->toolButton_animals->setCheckable(true);
    ui->toolButton_countries->setCheckable(true);
    ui->toolButton_flowers->setCheckable(true);
    ui->toolButton_foods->setCheckable(true);
    ui->toolButton_people->setCheckable(true);
    ui->toolButton_verbs->setCheckable(true);

}

Add_words::~Add_words()
{
    delete ui;
}

void Add_words::on_pushButton_home_clicked()
{
    hide();
}

bool Add_words::categories()
{
    int checked_count{};
    if (ui->toolButton_animals->isChecked()) {
        ui->toolButton_animals->setStyleSheet("QPushButton {  color : green}");
        checked_count++;

    }
    if (ui->toolButton_countries->isChecked()) {
        ui->toolButton_countries->setStyleSheet("QPushButton { background-color: rgb(38, 162, 105); }");
        checked_count++;
    }
    if (ui->toolButton_flowers->isChecked()) {
        ui->toolButton_flowers->setStyleSheet("QPushButton { background-color: rgb(38, 162, 105); }");
        checked_count++;
    }
    if (ui->toolButton_foods->isChecked()) {
        ui->toolButton_foods->setStyleSheet("QPushButton { background-color: rgb(38, 162, 105); }");
        checked_count++;
    }
    if (ui->toolButton_people->isChecked()) {
        ui->toolButton_people->setStyleSheet("QPushButton { background-color: rgb(38, 162, 105); }");
        checked_count++;
    }
    if (ui->toolButton_verbs->isChecked()) {
        ui->toolButton_verbs->setStyleSheet("QPushButton { background-color: rgb(38, 162, 105); }");
        checked_count++;
    }
    if (checked_count == 1) {
        return true;
    }
    return false;
}

void Add_words::on_pushButton_add_words_clicked()
{
    if (Add_words::categories()) {
        QString category_name;
        if (ui->toolButton_animals->isChecked()) {
            category_name = ui->toolButton_animals->text();
        } else
        if (ui->toolButton_countries->isChecked()) {
            category_name = ui->toolButton_countries->text();
        } else
        if (ui->toolButton_flowers->isChecked()) {
            category_name = ui->toolButton_flowers->text();
        } else
        if (ui->toolButton_foods->isChecked()) {
            category_name = ui->toolButton_foods->text();
        } else
        if (ui->toolButton_people->isChecked()) {
            category_name = ui->toolButton_people->text();
        } else
        if (ui->toolButton_verbs->isChecked()) {
            category_name = ui->toolButton_verbs->text();
        }
        category = new Category(this);
        category->show();

        //category->
    }
}

