#ifndef BIG_CLASS_H
#define BIG_CLASS_H

#include "home.h"
#include "rules.h"
#include "category.h"
#include "add_words.h"
#include "groups.h"
#include "play.h"
#include "start.h"
#include "time_is_up.h"
#include "winner.h"

#include <vector>
#include <iostream>
#include <QFile>
#include <QTextStream>



class Big_class
{
private:
    Home* home;
    Rules* rules;
    Category* category;
    Add_words* add_words;
    Groups* groups;
    Play* play;
    Start* start;
    Time_is_up* time_is_up;
    Winner* winner;
    std::vector<std::string> category_vector;
    std::vector<std::string> word_vector;
    std::ostream fout;
    std::istream fin;
public:
    void on_push_button_home_clicked();
    void add_category();
    void add_word();

};

#endif // BIG_CLASS_H
