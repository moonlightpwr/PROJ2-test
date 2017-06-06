#ifndef MINION_H
#define MINION_H

#include <QGraphicsPixmapItem>
#include <QPixmap>


class Minion : public QGraphicsPixmapItem{
public:
    Minion(int id);                  //constructor,set minion's attributes
    int GetMoveSpeed();
    int GetAttackValue();
    int GetAttackRange();
    int GetHp();

    void MinusHp(int damage);

private: //minion attributes
    int Movespeed;
    int AttackValue;
    int AttackRange;
    int Hp;
};

#endif // MINION_H
