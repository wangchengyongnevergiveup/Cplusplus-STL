#include "Monster.h"
#include "fileManager.h"

Monster::Monster(int monsterId)
{
	FileManager fm;
	map<string, map<string, string>> monsterData; //����������
	fm.loadCSVData("Monster.csv", monsterData);

	string tmpId = std::to_string(monsterId); //int תstring
	string id = monsterData[tmpId]["monsterId"];

	this->monsterName = monsterData[id]["monsterName"];  //����
	this->monsterAck = atoi(monsterData[id]["monsterAck"].c_str());  //������
	this->monsterDef = atoi(monsterData[id]["monsterDef"].c_str()); //������
	this->monsterHp = atoi(monsterData[id]["monsterHp"].c_str()); //Ѫ��
	this->isFrozen = false; //����״̬
}

void Monster::Attack(Hero* hero)
{
	if (this->isFrozen)
	{
		std::cout << "����<" << this->monsterName << ">������,���غ��޷�����!" << std::endl;
		return;
	}

	//�����Ӣ�۵��˺�
	int damage = (this->monsterAck - hero->heroDef > 0) ? (this->monsterAck - hero->heroDef) : 1;
	//Ӣ�۷������߹����﹥������Ӣ�۵�1��Ѫ
	hero->heroHp -= damage;
	cout << "����<" << this->monsterName << ">����Ӣ��<" << hero->heroName << ">,���" << damage << "���˺�!" << endl;

}
