#pragma once
#include <iostream>
#include "Weapon.h"
#include <string>
using namespace std;

//武器类属性：基础伤害、特效（吸血、定身、暴击）
//大砍刀类
class BroadSword : public Weapon
{
public:
	//构造函数
	BroadSword();

	//获取基础伤害
	virtual int getBaseDamage();
	//暴击效果 返回值大于0 触发暴击
	virtual int getCrit();
	//获取吸血 返回值大于0 触发吸血
	virtual int getSuckBlood();
	//冰冻效果 返回值大于 代表冰冻
	virtual int getFrozen();

	//触发几率
	virtual bool isTrigger(int rate); //是否触发
};