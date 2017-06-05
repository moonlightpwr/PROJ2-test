//#include "mainwindow.h"
#include <QApplication>
#include "game.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    Game * game = new Game();
    game->show();

//    MainWindow w;
//    w.show();

    return a.exec();
}
