#include "mainwindow.h"
#include <QApplication>
#include "form.h"
#include "video.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Form fo;
    video vo;
    w.show();
    vo.show();
    QObject::connect(&w,SIGNAL(login(QString)),&fo,SLOT(start(QString)));
    return a.exec();
}
