#include "start.h"
#include "ui_start.h"

Start::Start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(on_push_button_clicked()));
}

Start::~Start()
{
    delete ui;
}

void Start::on_pushButton_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    /////////////////////
}

