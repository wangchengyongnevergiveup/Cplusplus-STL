#pragma once
#include <iostream>
#include "Weapon.h"
#include <string>
using namespace std;

//���������ԣ������˺�����Ч����Ѫ������������
//С�������κ�����
class Knife : public Weapon
{
public:
	//���캯��
	Knife();

	//��ȡ�����˺�
	virtual int getBaseDamage();
	//����Ч�� ����ֵ����0 ��������
	virtual int getCrit();
	//��ȡ��Ѫ ����ֵ����0 ������Ѫ
	virtual int getSuckBlood();
	//����Ч�� ����ֵ���� �������
	virtual int getFrozen();

	//��������
	virtual bool isTrigger(int rate); //�Ƿ񴥷�
};