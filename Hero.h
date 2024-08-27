#pragma once
#include <iostream>
#include <string>
#include "Monster.h"
using namespace std;

class Monster;
//英雄类：攻击力、防御、血量、武器、装备武器、攻击怪物
class Hero
{
public:
	Hero(int heroId);//有参构造

	void Attack(Monster* monster);//攻击怪物
	void EquipWeapon(Weapon* weapon);//装备武器
public:
	int heroHp;//血量
	int heroAck;//攻击力
	int heroDef;// 防御力
	string heroName;//英雄名
	string heroInfo;//英雄简介
	Weapon* pWeapon;//维护武器指针
};

