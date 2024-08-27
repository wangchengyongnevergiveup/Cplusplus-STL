//#pragma once
//#include "03-12head.h"
//#include "03-12speeker.h"
//
//class SpeechManager
//{
//public:
//	//构造函数
//	SpeechManager();
//
//	//展示菜单
//	void ShowMenue();
//	//退出系统
//	void exitSystem();
//	//初始化容器属性
//	void initSpeech();
//	
//	//创建12名选手
//	void creatSpeeker();
//	//开始比赛
//	void starManager();
//	//抽签
//	void speechDraw();
//	//比赛
//	void speechContest();
//	//显示得分
//	void showScore();
//	//保存分数
//	void saveRecord();
//	//读取记录
//	void loadRecord();
//	//判断文件是否为空的标志
//	bool fileIsEmpty;
//	//存放往届记录的容器 
//	map<int, vector<string>> m_Record;
//	//显示往届记录
//	void showRecord();
//	//清空记录
//	void clearRecord();
//
//	//析构函数
//	~SpeechManager();
//
//	//成员属性
//	//保存第一轮选手编号的容器 
//	vector<int>v1;
//	//第一轮晋级选手编号容器
//	vector<int>v2;
//	//胜出前三名选手编号容器
//	vector<int>vvictory;
//	//存放编号以及对应选手容器
//	map<int, Speaker>m_Speaker;
//	//记录比赛轮数
//	int m_Index;
//};