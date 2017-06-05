#ifndef TOWER_H
#define TOWER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Tower : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Tower(QGraphicsItem * parent=0);
public slots:
    void attack();
private:
    int HP;         //HpValue
    int ATT;        //AttackValue
    int ATT_RANGE;  //AttackRange
};


#endif // TOWER_H
