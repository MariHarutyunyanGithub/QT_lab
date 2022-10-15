#ifndef MY_ALIAS_H
#define MY_ALIAS_H

#include <QMainWindow>
#include <QFile>
#include <QVector>
#include <QString>
#include <QTimer>

#include "home.h"
#include "start.h"

class Start;

QT_BEGIN_NAMESPACE
namespace Ui {
class My_Alias;
}
QT_END_NAMESPACE

class My_Alias : public QMainWindow
{
    Q_OBJECT

public:
    My_Alias(QWidget *parent = nullptr);
    ~My_Alias();

private slots:
    void on_start_clicked();
    void push_categories_in_vector();
    void push_words_in_vector();
    void show_timer();
    void show_group_name();
private:
    Ui::My_Alias *ui;
    Home *home;
    Start* start;
    QTimer* timer;
    std::vector<QString> category_vector;
    std::vector<QString> word_vector;

};
#endif // MY_ALIAS_H
