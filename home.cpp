#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}

void Home::on_pushButton_rules_clicked()
{
    rules = new Rules(this);
    rules->show();
}

void Home::on_pushButton_add_words_clicked()
{
    add_words = new Add_words(this);
    add_words->show();
}

void Home::on_pushButton_play_clicked()
{
    play = new Play(this);
    play->show();
}

void Home::on_pushButton_exit_clicked()
{
    exit = new Exit(this);
    exit->show();
}
