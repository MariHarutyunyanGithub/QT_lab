#ifndef ADD_WORDS_H
#define ADD_WORDS_H

#include <QDialog>
#include "category.h"

namespace Ui {
class Add_words;
}

class Add_words : public QDialog
{
    Q_OBJECT

public:
    explicit Add_words(QWidget *parent = nullptr);
    ~Add_words();

private slots:

    void on_pushButton_add_words_clicked();

    void on_pushButton_home_clicked();

    bool categories();

private:
    Ui::Add_words *ui;
    Category *category;
};

#endif // ADD_WORDS_H
