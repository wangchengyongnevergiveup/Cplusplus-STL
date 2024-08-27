#include "Knife.h"
#include "fileManager.h"

Knife::Knife()
{
    FileManager fm;
    map<string, map<string, string>> mWeapon;
    fm.loadCSVData("Weapon.csv", mWeapon);

    string id = mWeapon["1"]["weaponId"];
	//string 转 int： string -> const char* ->int (atoi)
    this->weaponName = mWeapon[id]["weaponName"];  //名称
	this->baseDamage = atoi(mWeapon[id]["weaponAck"].c_str());  //武器攻击力
	this->critPlus = atoi(mWeapon[id]["weaponCritPlus"].c_str()); //暴击系数
	this->critRate = atoi(mWeapon[id]["weaponCritRate"].c_str()); //暴击率
	this->suckPlus = atoi(mWeapon[id]["weaponSuckPlus"].c_str()); //吸血系数
	this->suckRate = atoi(mWeapon[id]["weaponSuckRate"].c_str()); //吸血率
	this->frozenRate = atoi(mWeapon[id]["weaponFrozenRate"].c_str()); //冰冻率

}

//获取基础伤害
int Knife::getBaseDamage()
{
	return this->baseDamage;
}

//获取暴击
int Knife::getCrit()
{
	if (isTrigger(critRate))
	{
		return this->baseDamage * this->critPlus;
	}
	else
	{
		return 0;
	}
}

//吸血
int Knife::getSuckBlood()
{
	if (isTrigger(suckRate))
	{
		return this->baseDamage * this->suckPlus;
	}
	else
	{
		return 0;
	}

}

//冰冻效果
int Knife::getFrozen()
{
	if (isTrigger(frozenRate))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//触发几率
bool Knife::isTrigger(int rate)
{
	int num = rand() % 100 + 1; //1~100
	if (num < rate)
	{
		return true;
	}
	return false;
}
