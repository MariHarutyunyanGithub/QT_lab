#ifndef PLAY_H
#define PLAY_H

#include <QDialog>
#include <QTimer>

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

    void countdown_timer();

private:
    Ui::Play *ui;
    Groups *groups;
    Start *start;
    QTimer *timer;
};

#endif // PLAY_H
