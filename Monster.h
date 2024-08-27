#pragma once
#include <iostream>
#include "Weapon.h"
#include <string>
#include "Hero.h"
using namespace std;

class Hero;
//怪物：攻击力、防御、血量、攻击英雄
class Monster
{
public:
    Monster(int monsterId);//有参构造
    void Attack(Hero* hero);//攻击英雄
public:
    string monsterName;//名称
    int monsterHp;//血量
    int monsterAck;//攻击力
    int monsterDef;//防御力
    bool isFrozen;//是否被冰冻
};