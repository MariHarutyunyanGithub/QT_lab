#ifndef CATEGORY_H
#define CATEGORY_H

#include <QDialog>

namespace Ui {
class Category;
}

class Category : public QDialog
{
    Q_OBJECT

public:
    explicit Category(QWidget *parent = nullptr);
    ~Category();

private:
    Ui::Category *ui;
};

#endif // CATEGORY_H
