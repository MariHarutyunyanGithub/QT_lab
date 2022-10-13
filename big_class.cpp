#include "big_class.h"

void Big_class::on_push_button_home_clicked()
{
    home = new Home;
    home->show();
}

void Big_class::add_category()
{
    QFile file("home/mari/Desktop/QT/my_alias/words/word_reserve.txt");
    if (file.open(QIODevice::ReadOnly)) {
        file.seek(0);
        while(file.write(QByteArray())) {

        }
        file.close();
    }
}
