#pragma once
#include <iostream>
#include "Weapon.h"
#include <string>
#include "Hero.h"
using namespace std;

class Hero;
//�����������������Ѫ��������Ӣ��
class Monster
{
public:
    Monster(int monsterId);//�вι���
    void Attack(Hero* hero);//����Ӣ��
public:
    string monsterName;//����
    int monsterHp;//Ѫ��
    int monsterAck;//������
    int monsterDef;//������
    bool isFrozen;//�Ƿ񱻱���
};