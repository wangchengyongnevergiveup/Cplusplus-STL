#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "fileManager.h"
#include "Weapon.h"
#include "Knife.h"
#include "broadSword.h"
#include "Dragonsword.h"
#include "Hero.h"
#include "Monster.h"
#include <ctime>

void Fighting()
{
	FileManager fm;
	map<string, map<string, string>> heroData;  //英雄表容器
	fm.loadCSVData("Hero.csv", heroData);

	cout << "欢迎来到天下第一武道大会！" << endl;
	cout << "请选择您的英雄：" << endl;
	char buf[1024];
	//%s  拼接的是C语言风格字符串
	sprintf(buf, "1、%s <%s>", heroData["1"]["heroName"].c_str(), heroData["1"]["heroInfo"].c_str());
	cout << buf << endl;
	sprintf(buf, "2、%s <%s>", heroData["2"]["heroName"].c_str(), heroData["2"]["heroInfo"].c_str());
	cout << buf << endl; 
	sprintf(buf, "3、%s <%s>", heroData["3"]["heroName"].c_str(), heroData["3"]["heroInfo"].c_str());
	cout << buf << endl;

	int select = 0;
	cin >> select;
	//cin.get();
	getchar();//防止缓冲区换行符带来的隐患

	Hero hero(select);//创建英雄对象
	cout << "您选择的英雄是:" << hero.heroName << endl;
	cout << "请为该英雄选择武器:" << endl;

	map<string, map<string, string>> WeaponData;  //英雄表容器
	fm.loadCSVData("Weapon.csv", WeaponData);
	cout << "1、赤手空拳" << endl;
	sprintf(buf, "2、%s ", WeaponData["1"]["weaponName"].c_str());
	cout << buf << endl;
	sprintf(buf, "3、%s ", WeaponData["2"]["weaponName"].c_str());
	cout << buf << endl;
	sprintf(buf, "4、%s ", WeaponData["3"]["weaponName"].c_str());
	cout << buf << endl;

	cin >> select;
	getchar();
	Weapon* weapon = NULL;

	switch (select)
	{
	case 1:
		cout << "no zuo no die why you try！";
		break;
	case 2:
		weapon = new Knife;
		break;
	case 3:
		weapon = new BroadSword;
		break;
	case 4:
		weapon = new DragonSword;
		break;
	}

	hero.EquipWeapon(weapon); //装备武器


	int id = rand() % 5 + 1; //1~5
	//随机创建一个怪物
	Monster monster(id);

	int round = 1;//回合
	while (true)
	{
		getchar();
		system("cls");

		cout << "----- 当前第 " << round << " 回合开始 ------" << endl;
		if (hero.heroHp <= 0)
		{
			cout << "英雄" << hero.heroName << "已挂 ，游戏结束" << endl;
			break;
		}

		hero.Attack(&monster);
		if (monster.monsterHp <= 0)
		{
			cout << "怪物" << monster.monsterName << "已挂，顺利通关" << endl;
			break;
		}

		monster.Attack(&hero);

		cout << "英雄" << hero.heroName << "剩余血量：" << hero.heroHp << endl;
		cout << "怪物" << monster.monsterName << "剩余血量：" << monster.monsterHp << endl;

		if (hero.heroHp <= 0)
		{
			cout << "英雄" << hero.heroName << "已挂 ，游戏结束" << endl;
			break;
		}//如果不加这段判断  英雄血量变为负数的下一回合才会结束游戏

		round++;
	}
}

int main()
{
	//FileManager fm;
	////测试英雄表
	//map<string, map<string, string>> mHero;
	//fm.loadCSVData("Hero.csv", mHero);
	//cout << "第一个英雄姓名：" << mHero["1"]["heroName"] << endl;
	//cout << "第二个英雄姓名：" << mHero["2"]["heroName"] << endl;
	//cout << "第三个英雄姓名：" << mHero["3"]["heroName"] << endl;
	//cout << "第一个英雄血量：" << mHero["1"]["heroHp"] << endl;
	//cout << "第二个英雄防御力：" << mHero["2"]["heroDef"] << endl;
	//cout << "第三个英雄攻击力：" << mHero["3"]["heroAck"] << endl;
	//cout<< endl;
	////测试怪物表
	//map<string, map<string, string>> mMonster;
	//fm.loadCSVData("Monster.csv", mMonster);
	//cout << "第一个怪物姓名：" << mMonster["1"]["monsterName"] << endl;
	//cout << "第二个怪物姓名：" << mMonster["2"]["monsterName"] << endl;
	//cout << "第三个怪物姓名：" << mMonster["3"]["monsterName"] << endl;
	//cout << "第四个怪物攻击力：" << mMonster["2"]["monsterAck"] << endl;
	//cout << "第五个怪物防御力：" << mMonster["3"]["monsterDef"] << endl;
	//cout << endl;
	////测试武器表
	//map<string, map<string, string>> mWeapon;
	//fm.loadCSVData("Weapon.csv", mWeapon);
	//cout << "第一个武器姓名：" << mWeapon["1"]["weaponName"] << endl;
	//cout << "第二个武器姓名：" << mWeapon["2"]["weaponName"] << endl;
	//cout << "第三个武器姓名：" << mWeapon["3"]["weaponName"] << endl;
	//cout << "第一个武器攻击力：" << mWeapon["1"]["weaponAck"] << endl;
	//cout << "第二个武器暴击率：" << mWeapon["2"]["weaponCritRate"] << endl;
	//cout << "第三个武器冰冻率：" << mWeapon["3"]["weaponFrozenRate"] << endl;

	/*Weapon* weapon = NULL;
	weapon = new Knife;
	cout << "第一把武器名：" << weapon->weaponName << endl;
	cout << "第一把攻击力：" << weapon->baseDamage << endl;
	cout << "第一把暴击率：" << weapon->critRate << endl;
	cout<< endl;
	delete weapon;

	weapon = new BroadSword;
	cout << "第二把武器名：" << weapon->weaponName << endl;
	cout << "第二把攻击力：" << weapon->baseDamage << endl;
	cout << "第二把暴击率：" << weapon->critRate << endl;
	cout<< endl;
	delete weapon;

	weapon = new DragonSword;
	cout << "第三把武器名：" << weapon->weaponName << endl;
	cout << "第三把攻击力：" << weapon->baseDamage << endl;
	cout << "第三把暴击率：" << weapon->critRate << endl;
	delete weapon;*/

	srand((unsigned int)time(NULL));
	Fighting();

	system("pause");
	return 0;
}
