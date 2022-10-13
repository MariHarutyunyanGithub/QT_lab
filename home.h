#ifndef HOME_H
#define HOME_H

#include <QDialog>
#include "rules.h"
#include "add_words.h"
#include "play.h"
#include "exit.h"

namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private slots:
    void on_pushButton_rules_clicked();

    void on_pushButton_add_words_clicked();

    void on_pushButton_play_clicked();

    void on_pushButton_exit_clicked();

    //void onDialogAccepted();

    //void onDialogRejected();

private:
    Ui::Home *ui;
    Rules *rules;
    Add_words *add_words;
    Play *play;
    Exit *exit;
};

#endif // HOME_H
