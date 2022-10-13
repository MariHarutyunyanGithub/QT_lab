#ifndef CATEGORY_H
#define CATEGORY_H

#include <QDialog>
#include <QVector>
#include <QString>

namespace Ui {
class Category;
}

class Category : public QDialog
{
    Q_OBJECT

public:
    explicit Category(QWidget *parent = nullptr);
    ~Category();

private slots:
    void on_back_to_categories_clicked();

private:
    Ui::Category *ui;
    QVector<QString> category_vector;
};

#endif // CATEGORY_H
