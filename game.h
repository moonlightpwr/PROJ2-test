#ifndef GAME_H
#define GAME_H
/*
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
*/
#include <QObject>
#include <QTimer>
#include <QKeyEvent>

#include "scene.h"
#include "view.h"


class Game :public QObject{
    Q_OBJECT
public:
    Game();
    QTimer * timer;
    Scene * play_scene;
    View * play_view;

};

#endif // GAME_H
