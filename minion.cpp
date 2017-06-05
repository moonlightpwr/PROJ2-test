#include "minion.h"


Minion::Minion(int id){
    if(id==1){
        AttackValue = 20;
        AttackRange = 10;
        Hp = 600;
        Movespeed = 10;
        QPixmap pic (":/tank.png");
        setPixmap(pic);
    }
    else if(id==2){
        AttackValue = 80;
        AttackRange = 10;
        Hp = 200;
        Movespeed = 20;
        QPixmap pic (":/barbarian.png");
        setPixmap(pic);
    }
    else if(id==3){
        AttackValue = 50;
        AttackRange = 50;
        Hp = 150;
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
    else if(id==6){ //start from here next time
        AttackValue = 80;
        AttackRange = 10;
        Hp = 200;
        Movespeed = 20;
        QPixmap pic (":/barbarian.png");
        setPixmap(pic);
    }
    else if(id==7){
        AttackValue = 80;
        AttackRange = 10;
        Hp = 200;
        Movespeed = 20;
        QPixmap pic (":/barbarian.png");
        setPixmap(pic);
    }
    else if(id==8){
        AttackValue = 80;
        AttackRange = 10;
        Hp = 200;
        Movespeed = 20;
        QPixmap pic (":/barbarian.png");
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
