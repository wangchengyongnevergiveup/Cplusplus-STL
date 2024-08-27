#include "Hero.h"
#include "fileManager.h"

Hero::Hero(int heroId)
{
	FileManager fm;
	map<string, map<string, string>> heroData; //武器表容器
	fm.loadCSVData("Hero.csv", heroData);

	string tmpId = std::to_string(heroId); //int 转string

	string id = heroData[tmpId]["heroId"];

	this->heroName = heroData[id]["heroName"];  //英雄名
	this->heroAck = atoi(heroData[id]["heroAck"].c_str());  //攻击力
	this->heroDef = atoi(heroData[id]["heroDef"].c_str()); //防御力
	this->heroHp = atoi(heroData[id]["heroHp"].c_str()); //血量
	this->heroInfo = heroData[id]["heroInfo"]; //英雄介绍

	this->pWeapon = NULL; //武器指针 开始为空
}

//英雄攻击
void Hero::Attack(Monster* monster)
{
	int crit = 0;
	int addHP = 0;
	int forzen = 0;
	int damage = 0;

	if (this->pWeapon == NULL) 
	{
		damage = this->heroAck;  //武器为空，赤手空拳
	}
	else 
	{
		//基础伤害
		damage = this->heroAck + this->pWeapon->getBaseDamage();
		//是否暴击
		crit = this->pWeapon->getCrit();
		//计算吸血
		addHP = this->pWeapon->getSuckBlood();
		//是否定身
		forzen = this->pWeapon->getFrozen();
	}

	if (crit) 
	{
		damage = damage + crit; //如果暴击，伤害加上武器的暴击伤害
		cout << "英雄武器触发暴击,怪物<" << monster->monsterName << ">受到暴击伤害!" << endl;
	}
	if (addHP)
	{
		cout << "英雄武器触发吸血效果,英雄血量增加" << addHP << "血!" << endl;
	}
	if (forzen)
	{
		cout << "英雄武器触发冰冻效果,怪物<" << monster->monsterName << ">停止攻击一回合!" << endl;
	}
	

	monster->isFrozen = forzen;
	this->heroHp += addHP;  //吸血
	int trueDamage = (damage - monster->monsterDef) > 0 ? (damage - monster->monsterDef) : 1;
	monster->monsterHp -= trueDamage;  //真实打到怪物上的伤害
	cout << "英雄<" << this->heroName << ">攻击怪物<" << monster->monsterName << ">,造成" << trueDamage << "点伤害!" << std::endl;
}

//装备武器
void Hero::EquipWeapon(Weapon* weapon)
{
	if (weapon == NULL)
	{
		return;
	}
	this->pWeapon = weapon;
	cout << "英雄<" << this->heroName << ">装备了武器<" << this->pWeapon->weaponName << ">!" << endl;
}
