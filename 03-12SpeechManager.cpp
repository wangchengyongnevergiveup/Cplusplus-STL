//#include"03-12SpeechManager.h"
//
////构造函数
//SpeechManager::SpeechManager()
//{
//	//初始化容器和属性
//	this->initSpeech();
//	//创建12名选手
//	this->creatSpeeker();
//	//加载往届记录
//	this->loadRecord();
//}
//
////展示系统
//void SpeechManager::ShowMenue()
//{
//	cout << "****************************************" << endl;
//	cout << "************欢迎参加演讲比赛************" << endl;
//	cout << "************1、开始演讲比赛*************" << endl;
//	cout << "************2、查看往届记录*************" << endl;
//	cout << "************3、清空比赛记录*************" << endl;
//	cout << "************0、退出比赛程序*************" << endl;
//	cout << "****************************************" << endl;
//	cout << endl;
//}
//
////退出系统
//void SpeechManager::exitSystem()
//{
//	cout << "欢迎下次使用" << endl;
//	system("pause");
//	exit(0);
//}
//
////初始化容器属性
//void SpeechManager::initSpeech()
//{
//	//容器都置空
//	this->v1.clear();
//	this->v2.clear();
//	this->vvictory.clear();
//	this->m_Speaker.clear();
//	//初始化比赛轮数
//	this->m_Index = 1;
//	//初始化记录容器
//	this->m_Record.clear();
//}
//
////创建12名选手
//void SpeechManager::creatSpeeker()
//{
//	string nameSeed = "ABCDEFGHIJKL";
//
//	for (int i = 0; i < nameSeed.size(); i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//		//创建具体选手
//		Speaker sp;
//		sp.SP_name = name;
//		//选手的分数置为0
//		for (int j = 0; j < 2; j++)//两轮
//		{
//			sp.SP_score[j] = 0;
//		}
//		//创建选手编号并放入v1容器中
//		this->v1.push_back(i + 10001);
//		//选手编号以及对应选手放入map中
//		this->m_Speaker.insert(make_pair(i + 10001, sp));
//	}
//}
//
////开始比赛-比赛流程控制
//void SpeechManager::starManager()
//{
//
//	//第一轮开始比赛
//	//1、抽签
//	this->speechDraw();
//	//2、比赛
//	this->speechContest();
//	//3、显示晋级结果
//	this->showScore();
//
//	//第二轮开始比赛
//	this->m_Index++;
//	//1、抽签
//	this->speechDraw();
//	//2、比赛
//	this->speechContest();
//	//3、显示最终结果
//	this->showScore();
//
//	//4、保存分数到文件中
//	this->saveRecord();
//
//	//重置比赛，并且获取记录
//	//初始化容器和属性
//	this->initSpeech();
//	//创建12名选手
//	this->creatSpeeker();
//	//加载往届记录
//	this->loadRecord();
//
//	cout << "本届比赛圆满结束！" << endl;
//	system("pause");
//	system("cls");
//}
//
////抽签
//void SpeechManager::speechDraw()
//{
//	cout << "第 <<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
//	cout << "--------------------------------" << endl;
//	cout << "抽签后演讲顺序如下:" << endl;
//
//	if (this->m_Index == 1)//第1轮比赛
//	{
//		//第一轮比赛
//		random_shuffle(v1.begin(), v1.end());
//		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//		{
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		//第二轮比赛
//		random_shuffle(v2.begin(), v2.end());
//		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
//		{
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//
//	cout << "--------------------------------" << endl;
//	system("pause");
//	system("cls");//清屏
//	cout << endl;
//}
//
////比赛
//void SpeechManager::speechContest()
//{
//	//准备一个临时容器存放小组成绩 保存key分数 value 选手编号
//	multimap<double, int, greater<double>>groupScore;
//
//	int num = 0;//记录人员个数6人一组
//	cout << "------------第" << this->m_Index << "轮比赛正式开始----------" << endl;
//	vector<int>v_Src;//比赛选手容器
//	//判断这是第几轮比赛
//	if (this->m_Index == 1)
//	{
//		v_Src = v1;
//	}
//	else
//	{
//		v_Src = v2;
//	}
//
//	//遍历所有选手，进行比赛
//	//每一遍遍历都是对一个选手进行的操作
//	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
//	{
//		num++;
//		//评委打分
//		//将十位评委打的分存入deque容器中
//		deque<double>d;
//		for (int i = 0; i < 10; i++)
//		{
//			double score = (rand() % 401 + 600) / 10.f;//600~1000初始值是600，随机0`400
//			//cout << score << " ";
//			d.push_back(score);
//		}
//		//cout << endl;
//
//		//将打的分进行排序
//		sort(d.begin(), d.end(), greater<double>());
//
//		//去掉最高分与最低分
//		d.pop_back();
//		d.pop_front();
//
//		//求平均分
//		double sum = accumulate(d.begin(), d.end(), 0.0f);////获取总分
//		double avg = sum / (double)d.size();//获取平均分
//
//		//打印平均分
//		//cout << "编号:  " << *it << "姓名:  " << this->m_Speaker[*it].SP_name << "获取平均分:  " << avg << endl;
//
//		//将平均分放到map中
//		//将平均分存入之前的编号与成绩的map中m-Speaker
//		this->m_Speaker[*it].SP_score[this->m_Index - 1] = avg;
//
//		//6个人一组，用临时容器保存,将打分数据放入临时小组容器中
//		groupScore.insert(make_pair(avg, *it));//key是得分，value是选手具体编号
//
//		//每6人取出前三名
//		if (num % 6 == 0)
//		{
//			cout << "第" << num / 6 << "小组的比赛名次:" << endl;
//			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
//			{
//				cout << "编号是: " << it->second << "姓名: " << this->m_Speaker[it->second].SP_name << "成绩为： " << this->m_Speaker[it->second].SP_score[this->m_Index - 1] << endl;
//
//			}
//			int count = 0;
//			//取走前三名
//			//每一轮是六个人比赛，将每一轮的前三个取出，第一轮的取出放入v2中，第二轮放入vvictory中
//			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
//			{
//				if (this->m_Index == 1)
//				{
//					v2.push_back((*it).second);
//				}
//				else
//				{
//					vvictory.push_back((*it).second);
//				}
//			}
//			groupScore.clear();
//			cout << endl;
//		}
//	}
//
//	cout << "----------第" << this->m_Index << "轮比赛完毕!------------" << endl;
//	system("pause");
//}
//
////显示得分
//void SpeechManager::showScore()
//{
//	cout << "--------------------------第" << this->m_Index << "轮晋级选手信息如下--------------------" << endl;
//	vector<int>v;
//	if (this->m_Index == 1)//第二轮
//	{
//		v = v2;
//	}
//	else
//	{
//		v = vvictory;
//	}
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "选手编号为： " << *it << "姓名： " << this->m_Speaker[*it].SP_name << "分数为: " << this->m_Speaker[*it].SP_score[this->m_Index - 1] << endl;
//	}
//	cout << endl;
//	//v.clear();
//	system("pause");
//	system("cls");
//	this->ShowMenue();
//}
//
////保存分数
//void SpeechManager::saveRecord()
//{
//	ofstream ofs;
//	ofs.open("分数.csv", ios::out | ios::app);//用输出的方式打开文件--写文件
//
//	//将每个人的数据写到文件中
//	for (vector<int>::iterator it = vvictory.begin(); it != vvictory.end(); it++)
//	{
//		ofs << *it << "," << m_Speaker[*it].SP_score[1] << ",";
//	}
//	ofs << endl;
//
//	//关闭文件
//	ofs.close();
//
//	cout << "-----------记录已保存-------------" << endl;
//	//更改文件不为空的状态
//	this->fileIsEmpty = false;
//}
//
////读取往届记录
//void SpeechManager::loadRecord()
//{
//	ifstream ifs("分数.csv", ios::in);//读文件
//	if (!ifs.is_open())//如果打开失败返回0，加上！就是1
//	{
//		this->fileIsEmpty = true;
//		cout << "文件不存在" << endl;
//		ifs.close();
//		return;
//	}
//
//	//文件清空的情况
//	char ch;
//	ifs >> ch;
//	if (ifs.eof())
//	{
//		cout << "文件为空" << endl;
//		this->fileIsEmpty = true;
//		ifs.close();
//		return;
//	}
//
//	//文件不为空
//	this->fileIsEmpty = false;
//	ifs.putback(ch);//将上面读取的字符放回来
//	string data;
//	int index = 0;
//	while (ifs >> data)
//	{
//		//cout << data << endl;
//		vector<string>v;//为了存放6个string字符串
//		int pos = -1;//查到","位置的变量
//		int start = 0;
//		while (true)
//		{
//			pos = data.find(",", start);
//			if (pos == -1)
//			{
//				//没找到
//				break;
//			}
//			string temp = data.substr(start, pos - start);//找到了,进行分割 参数1 起始位置，参数2 截取长度
//			v.push_back(temp);
//			start = pos + 1;
//		}
//		this->m_Record.insert(make_pair(index, v));
//		index++;
//	}
//
//	ifs.close();
//
//	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
//	//{
//	//	//因为第二个值是一个vector容器，所以第一个选手的分数在第二个位置,也就是1下标上
//	//	cout << it->first << "编号：" << it->second[0] << "分数:" << it->second[1] << endl;
//	//}
//}
//
////显示往届记录
//void SpeechManager::showRecord()
//{
//	if (this->fileIsEmpty)
//	{
//		cout << "文件为空或者文件不存在" << endl;
//	}
//	else
//	{
//		for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
//		{
//			cout << it->first
//				<< "冠军编号：" << it->second[0] << "分数:" << it->second[1] << " "
//				<< "亚军编号：" << it->second[2] << "分数:" << it->second[3] << " "
//				<< "季军编号：" << it->second[4] << "分数:" << it->second[5] << endl;
//
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
////清空记录
//void SpeechManager::clearRecord()
//{
//	cout << "是否清空文件??????" << endl;
//	cout << "1、是" << endl;
//	cout << "2、否" << endl;
//	int select;
//	cin >> select;
//	if (select == 1)
//	{
//		//确认清空
//		ofstream ofs("分数.csv", ios::trunc);//存在则删除且重新创建 
//		ofs.close();
//
//		//初始化容器和属性
//		this->initSpeech();
//		//创建12名选手
//		this->creatSpeeker();
//		//加载往届记录
//		this->loadRecord();
//		cout << "清空成功！" << endl;
//
//	}
//	system("pause");
//	system("cls");
//}
//
////析构函数
//SpeechManager::~SpeechManager()
//{
//
//}