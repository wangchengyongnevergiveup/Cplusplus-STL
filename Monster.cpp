#include "Monster.h"
#include "fileManager.h"

Monster::Monster(int monsterId)
{
	FileManager fm;
	map<string, map<string, string>> monsterData; //武器表容器
	fm.loadCSVData("Monster.csv", monsterData);

	string tmpId = std::to_string(monsterId); //int 转string
	string id = monsterData[tmpId]["monsterId"];

	this->monsterName = monsterData[id]["monsterName"];  //名称
	this->monsterAck = atoi(monsterData[id]["monsterAck"].c_str());  //攻击力
	this->monsterDef = atoi(monsterData[id]["monsterDef"].c_str()); //防御力
	this->monsterHp = atoi(monsterData[id]["monsterHp"].c_str()); //血量
	this->isFrozen = false; //冰冻状态
}

void Monster::Attack(Hero* hero)
{
	if (this->isFrozen)
	{
		std::cout << "怪物<" << this->monsterName << ">被冰冻,本回合无法攻击!" << std::endl;
		return;
	}

	//计算对英雄的伤害
	int damage = (this->monsterAck - hero->heroDef > 0) ? (this->monsterAck - hero->heroDef) : 1;
	//英雄防御力高过怪物攻击力则英雄掉1滴血
	hero->heroHp -= damage;
	cout << "怪物<" << this->monsterName << ">攻击英雄<" << hero->heroName << ">,造成" << damage << "点伤害!" << endl;

}
