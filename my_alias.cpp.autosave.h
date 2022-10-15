#include "my_alias.h"
#include "ui_my_alias.h"
#include <QPixmap>
#include <QDebug>
#include <QDateTime>


My_Alias::My_Alias(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::My_Alias)
{
    ui->setupUi(this);
    QPixmap pix("/home/mari/Desktop/QT/my_alias/images/images.png");
    int width = ui->image->width();
    int height = ui->image->height();

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(set_timer()));
    timer->start(1000);


    ui->image->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));
}

My_Alias::~My_Alias()
{
    delete ui;
}

// ֆունկցիան ֆայլից ինֆորմացիան հավաքում է համապատասխան վեկտորների մեջ։
//Հետո թաքցնում է գլխավոր պատուհանն ու բացում է home պատուհանը;

void My_Alias::on_start_clicked()
{
    push_categories_in_vector();
    push_words_in_vector();
    hide();
    home = new Home(this);
    home->show();
}

// ֆունկցիան բացում է ֆայլը, բառերն ըստ կատեգորիաների հավաքում է category_vector֊ի մեջ,
// վերջում փակում է ֆայլը։

void My_Alias::push_categories_in_vector()
{
    QFile inputFile(QString("home/mari/Desktop/QT/my_alias/words/word_reserve.txt"));
    inputFile.open(QIODevice::ReadOnly);
    if (!inputFile.isOpen()){
        return;
    }
    QTextStream stream(&inputFile);
    for (QString line = stream.readLine();
         !line.isNull();
         line = stream.readLine()) {
        category_vector.push_back(line);
    }
    inputFile.close();
}

// ֆունկցիան category_vector֊ից առանձնացնում է բառերը և գցում word_vector֊ի մեջ։

void My_Alias::push_words_in_vector()
{
    for (size_t i{}; i < category_vector.size(); ++i) {
        qsizetype j{};
        while (category_vector[i][j] != ':') {
            ++j;
        }
        while (j != category_vector[i].size()) {
            QString word{};
            while (category_vector[i][j] != '|') {
                word += category_vector[i][j];
                ++j;
            }
            word_vector.push_back(word);
        }
    }
}

void My_Alias::show_timer()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("mm : ss");
    if (time.second() % 2) {
        time_text[3] = ' ';
    }
    Ui::Start *ptr;
     ptr-ui->label_timer->setText(time_text);
}
