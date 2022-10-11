#ifndef PLAY_H
#define PLAY_H

#include <QDialog>
#include "groups.h"
#include "start.h"

namespace Ui {
class Play;
}

class Play : public QDialog
{
    Q_OBJECT

public:
    explicit Play(QWidget *parent = nullptr);
    ~Play();

private slots:

    void on_pushButton_groups_clicked();

    void on_pushButton_start_game_clicked();

private:
    Ui::Play *ui;
    Groups *groups;
    Start *start;
};

#endif // PLAY_H
