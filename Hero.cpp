#include "Hero.h"
#include "fileManager.h"

Hero::Hero(int heroId)
{
	FileManager fm;
	map<string, map<string, string>> heroData; //����������
	fm.loadCSVData("Hero.csv", heroData);

	string tmpId = std::to_string(heroId); //int תstring

	string id = heroData[tmpId]["heroId"];

	this->heroName = heroData[id]["heroName"];  //Ӣ����
	this->heroAck = atoi(heroData[id]["heroAck"].c_str());  //������
	this->heroDef = atoi(heroData[id]["heroDef"].c_str()); //������
	this->heroHp = atoi(heroData[id]["heroHp"].c_str()); //Ѫ��
	this->heroInfo = heroData[id]["heroInfo"]; //Ӣ�۽���

	this->pWeapon = NULL; //����ָ�� ��ʼΪ��
}

//Ӣ�۹���
void Hero::Attack(Monster* monster)
{
	int crit = 0;
	int addHP = 0;
	int forzen = 0;
	int damage = 0;

	if (this->pWeapon == NULL) 
	{
		damage = this->heroAck;  //����Ϊ�գ����ֿ�ȭ
	}
	else 
	{
		//�����˺�
		damage = this->heroAck + this->pWeapon->getBaseDamage();
		//�Ƿ񱩻�
		crit = this->pWeapon->getCrit();
		//������Ѫ
		addHP = this->pWeapon->getSuckBlood();
		//�Ƿ���
		forzen = this->pWeapon->getFrozen();
	}

	if (crit) 
	{
		damage = damage + crit; //����������˺����������ı����˺�
		cout << "Ӣ��������������,����<" << monster->monsterName << ">�ܵ������˺�!" << endl;
	}
	if (addHP)
	{
		cout << "Ӣ������������ѪЧ��,Ӣ��Ѫ������" << addHP << "Ѫ!" << endl;
	}
	if (forzen)
	{
		cout << "Ӣ��������������Ч��,����<" << monster->monsterName << ">ֹͣ����һ�غ�!" << endl;
	}
	

	monster->isFrozen = forzen;
	this->heroHp += addHP;  //��Ѫ
	int trueDamage = (damage - monster->monsterDef) > 0 ? (damage - monster->monsterDef) : 1;
	monster->monsterHp -= trueDamage;  //��ʵ�򵽹����ϵ��˺�
	cout << "Ӣ��<" << this->heroName << ">��������<" << monster->monsterName << ">,���" << trueDamage << "���˺�!" << std::endl;
}

//װ������
void Hero::EquipWeapon(Weapon* weapon)
{
	if (weapon == NULL)
	{
		return;
	}
	this->pWeapon = weapon;
	cout << "Ӣ��<" << this->heroName << ">װ��������<" << this->pWeapon->weaponName << ">!" << endl;
}
