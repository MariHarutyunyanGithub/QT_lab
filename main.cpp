#include "my_alias.h"
#include "big_class.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    My_Alias w;
    w.show();
    return a.exec();
}
