#include "play.h"
#include "ui_play.h"

Play::Play(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Play)
{
    ui->setupUi(this);
}

Play::~Play()
{
    delete ui;
}

void Play::on_pushButton_groups_clicked()
{
    hide();
    groups = new Groups(this);
    groups->show();
}
void Play::on_pushButton_start_game_clicked()
{
    hide();
    start = new Start(this);
    start->show();
}

