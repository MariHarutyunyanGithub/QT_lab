#include "my_alias.h"
#include "ui_my_alias.h"
#include <QPixmap>


My_Alias::My_Alias(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::My_Alias)
{
    ui->setupUi(this);
    QPixmap pix("/home/mari/Desktop/QT/my_alias/images/images.png");
    int width = ui->image->width();
    int height = ui->image->height();


    ui->image->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));
}

My_Alias::~My_Alias()
{
    delete ui;
}


void My_Alias::on_start_clicked()
{
    hide();
    home = new Home(this);
    home->show();
}
