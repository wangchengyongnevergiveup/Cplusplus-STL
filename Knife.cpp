#include "Knife.h"
#include "fileManager.h"

Knife::Knife()
{
    FileManager fm;
    map<string, map<string, string>> mWeapon;
    fm.loadCSVData("Weapon.csv", mWeapon);

    string id = mWeapon["1"]["weaponId"];
	//string ת int�� string -> const char* ->int (atoi)
    this->weaponName = mWeapon[id]["weaponName"];  //����
	this->baseDamage = atoi(mWeapon[id]["weaponAck"].c_str());  //����������
	this->critPlus = atoi(mWeapon[id]["weaponCritPlus"].c_str()); //����ϵ��
	this->critRate = atoi(mWeapon[id]["weaponCritRate"].c_str()); //������
	this->suckPlus = atoi(mWeapon[id]["weaponSuckPlus"].c_str()); //��Ѫϵ��
	this->suckRate = atoi(mWeapon[id]["weaponSuckRate"].c_str()); //��Ѫ��
	this->frozenRate = atoi(mWeapon[id]["weaponFrozenRate"].c_str()); //������

}

//��ȡ�����˺�
int Knife::getBaseDamage()
{
	return this->baseDamage;
}

//��ȡ����
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

//��Ѫ
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

//����Ч��
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

//��������
bool Knife::isTrigger(int rate)
{
	int num = rand() % 100 + 1; //1~100
	if (num < rate)
	{
		return true;
	}
	return false;
}
