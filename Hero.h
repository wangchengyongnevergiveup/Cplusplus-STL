#pragma once
#include <iostream>
#include <string>
#include "Monster.h"
using namespace std;

class Monster;
//Ӣ���ࣺ��������������Ѫ����������װ����������������
class Hero
{
public:
	Hero(int heroId);//�вι���

	void Attack(Monster* monster);//��������
	void EquipWeapon(Weapon* weapon);//װ������
public:
	int heroHp;//Ѫ��
	int heroAck;//������
	int heroDef;// ������
	string heroName;//Ӣ����
	string heroInfo;//Ӣ�ۼ��
	Weapon* pWeapon;//ά������ָ��
};

