#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QMediaPlayer>  //for the sound


Game::Game(QWidget *parent){
    //create the scene
    scene = new Scene();
    view = new View();
    view->setScene(scene);
    view->show();

}
