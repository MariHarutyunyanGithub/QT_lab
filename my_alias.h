#ifndef MY_ALIAS_H
#define MY_ALIAS_H

#include <QMainWindow>
#include "home.h"

QT_BEGIN_NAMESPACE
namespace Ui { class My_Alias; }
QT_END_NAMESPACE

class My_Alias : public QMainWindow
{
    Q_OBJECT

public:
    My_Alias(QWidget *parent = nullptr);
    ~My_Alias();

private slots:
    void on_pushButton_alias_clicked();

private:
    Ui::My_Alias *ui;
    Home *home;
};
#endif // MY_ALIAS_H
