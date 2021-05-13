#include "ttc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TTC w;
    w.show();
    return a.exec();
}
