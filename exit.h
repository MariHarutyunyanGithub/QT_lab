#ifndef EXIT_H
#define EXIT_H

#include <QDialog>

namespace Ui {
class Exit;
}

class Exit : public QDialog
{
    Q_OBJECT

public:
    explicit Exit(QWidget *parent = nullptr);
    ~Exit();

private slots:
    void on_pushButton_no_clicked();

    void on_pushButton_yes_clicked();

private:
    Ui::Exit *ui;
};

#endif // EXIT_H
