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
	map<string, map<string, string>> heroData;  //Ӣ�۱�����
	fm.loadCSVData("Hero.csv", heroData);

	cout << "��ӭ�������µ�һ�����ᣡ" << endl;
	cout << "��ѡ������Ӣ�ۣ�" << endl;
	char buf[1024];
	//%s  ƴ�ӵ���C���Է���ַ���
	sprintf(buf, "1��%s <%s>", heroData["1"]["heroName"].c_str(), heroData["1"]["heroInfo"].c_str());
	cout << buf << endl;
	sprintf(buf, "2��%s <%s>", heroData["2"]["heroName"].c_str(), heroData["2"]["heroInfo"].c_str());
	cout << buf << endl; 
	sprintf(buf, "3��%s <%s>", heroData["3"]["heroName"].c_str(), heroData["3"]["heroInfo"].c_str());
	cout << buf << endl;

	int select = 0;
	cin >> select;
	//cin.get();
	getchar();//��ֹ���������з�����������

	Hero hero(select);//����Ӣ�۶���
	cout << "��ѡ���Ӣ����:" << hero.heroName << endl;
	cout << "��Ϊ��Ӣ��ѡ������:" << endl;

	map<string, map<string, string>> WeaponData;  //Ӣ�۱�����
	fm.loadCSVData("Weapon.csv", WeaponData);
	cout << "1�����ֿ�ȭ" << endl;
	sprintf(buf, "2��%s ", WeaponData["1"]["weaponName"].c_str());
	cout << buf << endl;
	sprintf(buf, "3��%s ", WeaponData["2"]["weaponName"].c_str());
	cout << buf << endl;
	sprintf(buf, "4��%s ", WeaponData["3"]["weaponName"].c_str());
	cout << buf << endl;

	cin >> select;
	getchar();
	Weapon* weapon = NULL;

	switch (select)
	{
	case 1:
		cout << "no zuo no die why you try��";
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

	hero.EquipWeapon(weapon); //װ������


	int id = rand() % 5 + 1; //1~5
	//�������һ������
	Monster monster(id);

	int round = 1;//�غ�
	while (true)
	{
		getchar();
		system("cls");

		cout << "----- ��ǰ�� " << round << " �غϿ�ʼ ------" << endl;
		if (hero.heroHp <= 0)
		{
			cout << "Ӣ��" << hero.heroName << "�ѹ� ����Ϸ����" << endl;
			break;
		}

		hero.Attack(&monster);
		if (monster.monsterHp <= 0)
		{
			cout << "����" << monster.monsterName << "�ѹң�˳��ͨ��" << endl;
			break;
		}

		monster.Attack(&hero);

		cout << "Ӣ��" << hero.heroName << "ʣ��Ѫ����" << hero.heroHp << endl;
		cout << "����" << monster.monsterName << "ʣ��Ѫ����" << monster.monsterHp << endl;

		if (hero.heroHp <= 0)
		{
			cout << "Ӣ��" << hero.heroName << "�ѹ� ����Ϸ����" << endl;
			break;
		}//�����������ж�  Ӣ��Ѫ����Ϊ��������һ�غϲŻ������Ϸ

		round++;
	}
}

int main()
{
	//FileManager fm;
	////����Ӣ�۱�
	//map<string, map<string, string>> mHero;
	//fm.loadCSVData("Hero.csv", mHero);
	//cout << "��һ��Ӣ��������" << mHero["1"]["heroName"] << endl;
	//cout << "�ڶ���Ӣ��������" << mHero["2"]["heroName"] << endl;
	//cout << "������Ӣ��������" << mHero["3"]["heroName"] << endl;
	//cout << "��һ��Ӣ��Ѫ����" << mHero["1"]["heroHp"] << endl;
	//cout << "�ڶ���Ӣ�۷�������" << mHero["2"]["heroDef"] << endl;
	//cout << "������Ӣ�۹�������" << mHero["3"]["heroAck"] << endl;
	//cout<< endl;
	////���Թ����
	//map<string, map<string, string>> mMonster;
	//fm.loadCSVData("Monster.csv", mMonster);
	//cout << "��һ������������" << mMonster["1"]["monsterName"] << endl;
	//cout << "�ڶ�������������" << mMonster["2"]["monsterName"] << endl;
	//cout << "����������������" << mMonster["3"]["monsterName"] << endl;
	//cout << "���ĸ����﹥������" << mMonster["2"]["monsterAck"] << endl;
	//cout << "����������������" << mMonster["3"]["monsterDef"] << endl;
	//cout << endl;
	////����������
	//map<string, map<string, string>> mWeapon;
	//fm.loadCSVData("Weapon.csv", mWeapon);
	//cout << "��һ������������" << mWeapon["1"]["weaponName"] << endl;
	//cout << "�ڶ�������������" << mWeapon["2"]["weaponName"] << endl;
	//cout << "����������������" << mWeapon["3"]["weaponName"] << endl;
	//cout << "��һ��������������" << mWeapon["1"]["weaponAck"] << endl;
	//cout << "�ڶ������������ʣ�" << mWeapon["2"]["weaponCritRate"] << endl;
	//cout << "���������������ʣ�" << mWeapon["3"]["weaponFrozenRate"] << endl;

	/*Weapon* weapon = NULL;
	weapon = new Knife;
	cout << "��һ����������" << weapon->weaponName << endl;
	cout << "��һ�ѹ�������" << weapon->baseDamage << endl;
	cout << "��һ�ѱ����ʣ�" << weapon->critRate << endl;
	cout<< endl;
	delete weapon;

	weapon = new BroadSword;
	cout << "�ڶ�����������" << weapon->weaponName << endl;
	cout << "�ڶ��ѹ�������" << weapon->baseDamage << endl;
	cout << "�ڶ��ѱ����ʣ�" << weapon->critRate << endl;
	cout<< endl;
	delete weapon;

	weapon = new DragonSword;
	cout << "��������������" << weapon->weaponName << endl;
	cout << "�����ѹ�������" << weapon->baseDamage << endl;
	cout << "�����ѱ����ʣ�" << weapon->critRate << endl;
	delete weapon;*/

	srand((unsigned int)time(NULL));
	Fighting();

	system("pause");
	return 0;
}
