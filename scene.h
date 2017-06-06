#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

#include "minion.h"

#include <QVector>


class Scene :public QGraphicsScene{
    Q_OBJECT
public :
    Scene();
    int mode;

public slots:

private:
    QVector<Minion> my_minion;
    QVector<Minion> en_minion;
};

#endif // SCENE_H
