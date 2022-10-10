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
    void on_pushButton_add_category_clicked();

    void on_pushButton_confirm_clicked();

private:
    Ui::Add_words *ui;
    Category *category;
};

#endif // ADD_WORDS_H
