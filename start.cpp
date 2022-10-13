#include "start.h"
#include "ui_start.h"

Start::Start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(on_pushbutton_clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushbutton_clicked()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_pushbutton_clicked()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(on_pushbutton_clicked()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(on_pushbutton_clicked()));

    ui->pushButton_1->setCheckable(true);
    ui->pushButton_2->setCheckable(true);
    ui->pushButton_3->setCheckable(true);
    ui->pushButton_4->setCheckable(true);
    ui->pushButton_5->setCheckable(true);
}

Start::~Start()
{
    delete ui;
}

void Start::on_pushButton_clicked()
{
    if (ui->pushButton_1->isChecked()) {
        ui->pushButton_1->setStyleSheet("QPushButton { background-color: rgb(38, 162, 105); }");
        //checked_count++;

    }
}

