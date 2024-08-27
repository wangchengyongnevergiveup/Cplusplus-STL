//#include"03-12SpeechManager.h"
//
//int main()
//{
//	srand((unsigned int)time(NULL));//随机种子
//
//	//创建管理对象
//	SpeechManager sp;
//
//	//测试12名选手创建
//	//for (map<int, Speaker>::iterator it = sp.m_Speaker.begin(); it != sp.m_Speaker.end(); it++)
//	//{
//		//cout << "选手编号:" << it->first << "姓名：" << it->second.SP_name << "分数:" << it->second.SP_score[0] << endl;
//	//}
//
//	//用于用户输入
//	int choice = 0;
//
//	while (true)
//	{
//		sp.ShowMenue();//用来存储用户的选项
//
//		cout << "请输入你的选择" << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1://开始比赛
//			sp.starManager();
//			break;
//		case 2://查看记录
//			sp.showRecord();
//			break;
//		case 3://清空记录
//			sp.clearRecord();
//			break;
//		case 0://退出系统
//			sp.exitSystem();
//			break;
//
//		default:
//			system("cls");//清屏
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}