//#include"03-12SpeechManager.h"
//
//int main()
//{
//	srand((unsigned int)time(NULL));//�������
//
//	//�����������
//	SpeechManager sp;
//
//	//����12��ѡ�ִ���
//	//for (map<int, Speaker>::iterator it = sp.m_Speaker.begin(); it != sp.m_Speaker.end(); it++)
//	//{
//		//cout << "ѡ�ֱ��:" << it->first << "������" << it->second.SP_name << "����:" << it->second.SP_score[0] << endl;
//	//}
//
//	//�����û�����
//	int choice = 0;
//
//	while (true)
//	{
//		sp.ShowMenue();//�����洢�û���ѡ��
//
//		cout << "���������ѡ��" << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1://��ʼ����
//			sp.starManager();
//			break;
//		case 2://�鿴��¼
//			sp.showRecord();
//			break;
//		case 3://��ռ�¼
//			sp.clearRecord();
//			break;
//		case 0://�˳�ϵͳ
//			sp.exitSystem();
//			break;
//
//		default:
//			system("cls");//����
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}