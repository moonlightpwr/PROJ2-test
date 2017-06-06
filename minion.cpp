#include "minion.h"


Minion::Minion(int id){
    if(id==1){
        AttackValue = 20;
        AttackRange = 10;
        Hp = 800;
        Movespeed = 10;
        QPixmap pic (":/tank.png");
        setPixmap(pic);
    }
    else if(id==2){
        AttackValue = 80;
        AttackRange = 10;
        Hp = 280;
        Movespeed = 20;
        QPixmap pic (":/barbarian.png");
        setPixmap(pic);
    }
    else if(id==3){
        AttackValue = 50;
        AttackRange = 40;
        Hp = 180;
        Movespeed = 20;
        QPixmap pic (":/shooter.png");
        setPixmap(pic);
    }
    else if(id==4){
        AttackValue = 150;
        AttackRange = 10;
        Hp = 400;
        Movespeed = 10;
        QPixmap pic (":/super.png");
        setPixmap(pic);
    }
    else if(id==5){
        AttackValue = 100;
        AttackRange = 15;
        Hp = 250;
        Movespeed = 40;
        QPixmap pic (":/assasin.png");
        setPixmap(pic);
    }
    else if(id==6){
        AttackValue = 90;
        AttackRange = 65;
        Hp = 200;
        Movespeed = 20;
        QPixmap pic (":/sniper.png");
        setPixmap(pic);
    }


}

int Minion::GetMoveSpeed(){
    return MoveSpeed;
}

int Minion::GetAttackValue(){
    return AttackValue;
}

int Minion::GetAttackRange(){
    return AttackRange
}

int Minion::GetHp(){
    return Hp;
}

void Minion::MinusHp(int damage){
    Hp -= damage;
}
