//#include"03-12SpeechManager.h"
//
////���캯��
//SpeechManager::SpeechManager()
//{
//	//��ʼ������������
//	this->initSpeech();
//	//����12��ѡ��
//	this->creatSpeeker();
//	//���������¼
//	this->loadRecord();
//}
//
////չʾϵͳ
//void SpeechManager::ShowMenue()
//{
//	cout << "****************************************" << endl;
//	cout << "************��ӭ�μ��ݽ�����************" << endl;
//	cout << "************1����ʼ�ݽ�����*************" << endl;
//	cout << "************2���鿴�����¼*************" << endl;
//	cout << "************3����ձ�����¼*************" << endl;
//	cout << "************0���˳���������*************" << endl;
//	cout << "****************************************" << endl;
//	cout << endl;
//}
//
////�˳�ϵͳ
//void SpeechManager::exitSystem()
//{
//	cout << "��ӭ�´�ʹ��" << endl;
//	system("pause");
//	exit(0);
//}
//
////��ʼ����������
//void SpeechManager::initSpeech()
//{
//	//�������ÿ�
//	this->v1.clear();
//	this->v2.clear();
//	this->vvictory.clear();
//	this->m_Speaker.clear();
//	//��ʼ����������
//	this->m_Index = 1;
//	//��ʼ����¼����
//	this->m_Record.clear();
//}
//
////����12��ѡ��
//void SpeechManager::creatSpeeker()
//{
//	string nameSeed = "ABCDEFGHIJKL";
//
//	for (int i = 0; i < nameSeed.size(); i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//		//��������ѡ��
//		Speaker sp;
//		sp.SP_name = name;
//		//ѡ�ֵķ�����Ϊ0
//		for (int j = 0; j < 2; j++)//����
//		{
//			sp.SP_score[j] = 0;
//		}
//		//����ѡ�ֱ�Ų�����v1������
//		this->v1.push_back(i + 10001);
//		//ѡ�ֱ���Լ���Ӧѡ�ַ���map��
//		this->m_Speaker.insert(make_pair(i + 10001, sp));
//	}
//}
//
////��ʼ����-�������̿���
//void SpeechManager::starManager()
//{
//
//	//��һ�ֿ�ʼ����
//	//1����ǩ
//	this->speechDraw();
//	//2������
//	this->speechContest();
//	//3����ʾ�������
//	this->showScore();
//
//	//�ڶ��ֿ�ʼ����
//	this->m_Index++;
//	//1����ǩ
//	this->speechDraw();
//	//2������
//	this->speechContest();
//	//3����ʾ���ս��
//	this->showScore();
//
//	//4������������ļ���
//	this->saveRecord();
//
//	//���ñ��������һ�ȡ��¼
//	//��ʼ������������
//	this->initSpeech();
//	//����12��ѡ��
//	this->creatSpeeker();
//	//���������¼
//	this->loadRecord();
//
//	cout << "�������Բ��������" << endl;
//	system("pause");
//	system("cls");
//}
//
////��ǩ
//void SpeechManager::speechDraw()
//{
//	cout << "�� <<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
//	cout << "--------------------------------" << endl;
//	cout << "��ǩ���ݽ�˳������:" << endl;
//
//	if (this->m_Index == 1)//��1�ֱ���
//	{
//		//��һ�ֱ���
//		random_shuffle(v1.begin(), v1.end());
//		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//		{
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		//�ڶ��ֱ���
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
//	system("cls");//����
//	cout << endl;
//}
//
////����
//void SpeechManager::speechContest()
//{
//	//׼��һ����ʱ�������С��ɼ� ����key���� value ѡ�ֱ��
//	multimap<double, int, greater<double>>groupScore;
//
//	int num = 0;//��¼��Ա����6��һ��
//	cout << "------------��" << this->m_Index << "�ֱ�����ʽ��ʼ----------" << endl;
//	vector<int>v_Src;//����ѡ������
//	//�ж����ǵڼ��ֱ���
//	if (this->m_Index == 1)
//	{
//		v_Src = v1;
//	}
//	else
//	{
//		v_Src = v2;
//	}
//
//	//��������ѡ�֣����б���
//	//ÿһ��������Ƕ�һ��ѡ�ֽ��еĲ���
//	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
//	{
//		num++;
//		//��ί���
//		//��ʮλ��ί��ķִ���deque������
//		deque<double>d;
//		for (int i = 0; i < 10; i++)
//		{
//			double score = (rand() % 401 + 600) / 10.f;//600~1000��ʼֵ��600�����0`400
//			//cout << score << " ";
//			d.push_back(score);
//		}
//		//cout << endl;
//
//		//����ķֽ�������
//		sort(d.begin(), d.end(), greater<double>());
//
//		//ȥ����߷�����ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		//��ƽ����
//		double sum = accumulate(d.begin(), d.end(), 0.0f);////��ȡ�ܷ�
//		double avg = sum / (double)d.size();//��ȡƽ����
//
//		//��ӡƽ����
//		//cout << "���:  " << *it << "����:  " << this->m_Speaker[*it].SP_name << "��ȡƽ����:  " << avg << endl;
//
//		//��ƽ���ַŵ�map��
//		//��ƽ���ִ���֮ǰ�ı����ɼ���map��m-Speaker
//		this->m_Speaker[*it].SP_score[this->m_Index - 1] = avg;
//
//		//6����һ�飬����ʱ��������,��������ݷ�����ʱС��������
//		groupScore.insert(make_pair(avg, *it));//key�ǵ÷֣�value��ѡ�־�����
//
//		//ÿ6��ȡ��ǰ����
//		if (num % 6 == 0)
//		{
//			cout << "��" << num / 6 << "С��ı�������:" << endl;
//			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
//			{
//				cout << "�����: " << it->second << "����: " << this->m_Speaker[it->second].SP_name << "�ɼ�Ϊ�� " << this->m_Speaker[it->second].SP_score[this->m_Index - 1] << endl;
//
//			}
//			int count = 0;
//			//ȡ��ǰ����
//			//ÿһ���������˱�������ÿһ�ֵ�ǰ����ȡ������һ�ֵ�ȡ������v2�У��ڶ��ַ���vvictory��
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
//	cout << "----------��" << this->m_Index << "�ֱ������!------------" << endl;
//	system("pause");
//}
//
////��ʾ�÷�
//void SpeechManager::showScore()
//{
//	cout << "--------------------------��" << this->m_Index << "�ֽ���ѡ����Ϣ����--------------------" << endl;
//	vector<int>v;
//	if (this->m_Index == 1)//�ڶ���
//	{
//		v = v2;
//	}
//	else
//	{
//		v = vvictory;
//	}
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "ѡ�ֱ��Ϊ�� " << *it << "������ " << this->m_Speaker[*it].SP_name << "����Ϊ: " << this->m_Speaker[*it].SP_score[this->m_Index - 1] << endl;
//	}
//	cout << endl;
//	//v.clear();
//	system("pause");
//	system("cls");
//	this->ShowMenue();
//}
//
////�������
//void SpeechManager::saveRecord()
//{
//	ofstream ofs;
//	ofs.open("����.csv", ios::out | ios::app);//������ķ�ʽ���ļ�--д�ļ�
//
//	//��ÿ���˵�����д���ļ���
//	for (vector<int>::iterator it = vvictory.begin(); it != vvictory.end(); it++)
//	{
//		ofs << *it << "," << m_Speaker[*it].SP_score[1] << ",";
//	}
//	ofs << endl;
//
//	//�ر��ļ�
//	ofs.close();
//
//	cout << "-----------��¼�ѱ���-------------" << endl;
//	//�����ļ���Ϊ�յ�״̬
//	this->fileIsEmpty = false;
//}
//
////��ȡ�����¼
//void SpeechManager::loadRecord()
//{
//	ifstream ifs("����.csv", ios::in);//���ļ�
//	if (!ifs.is_open())//�����ʧ�ܷ���0�����ϣ�����1
//	{
//		this->fileIsEmpty = true;
//		cout << "�ļ�������" << endl;
//		ifs.close();
//		return;
//	}
//
//	//�ļ���յ����
//	char ch;
//	ifs >> ch;
//	if (ifs.eof())
//	{
//		cout << "�ļ�Ϊ��" << endl;
//		this->fileIsEmpty = true;
//		ifs.close();
//		return;
//	}
//
//	//�ļ���Ϊ��
//	this->fileIsEmpty = false;
//	ifs.putback(ch);//�������ȡ���ַ��Ż���
//	string data;
//	int index = 0;
//	while (ifs >> data)
//	{
//		//cout << data << endl;
//		vector<string>v;//Ϊ�˴��6��string�ַ���
//		int pos = -1;//�鵽","λ�õı���
//		int start = 0;
//		while (true)
//		{
//			pos = data.find(",", start);
//			if (pos == -1)
//			{
//				//û�ҵ�
//				break;
//			}
//			string temp = data.substr(start, pos - start);//�ҵ���,���зָ� ����1 ��ʼλ�ã�����2 ��ȡ����
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
//	//	//��Ϊ�ڶ���ֵ��һ��vector���������Ե�һ��ѡ�ֵķ����ڵڶ���λ��,Ҳ����1�±���
//	//	cout << it->first << "��ţ�" << it->second[0] << "����:" << it->second[1] << endl;
//	//}
//}
//
////��ʾ�����¼
//void SpeechManager::showRecord()
//{
//	if (this->fileIsEmpty)
//	{
//		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
//	}
//	else
//	{
//		for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
//		{
//			cout << it->first
//				<< "�ھ���ţ�" << it->second[0] << "����:" << it->second[1] << " "
//				<< "�Ǿ���ţ�" << it->second[2] << "����:" << it->second[3] << " "
//				<< "������ţ�" << it->second[4] << "����:" << it->second[5] << endl;
//
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
////��ռ�¼
//void SpeechManager::clearRecord()
//{
//	cout << "�Ƿ�����ļ�??????" << endl;
//	cout << "1����" << endl;
//	cout << "2����" << endl;
//	int select;
//	cin >> select;
//	if (select == 1)
//	{
//		//ȷ�����
//		ofstream ofs("����.csv", ios::trunc);//������ɾ�������´��� 
//		ofs.close();
//
//		//��ʼ������������
//		this->initSpeech();
//		//����12��ѡ��
//		this->creatSpeeker();
//		//���������¼
//		this->loadRecord();
//		cout << "��ճɹ���" << endl;
//
//	}
//	system("pause");
//	system("cls");
//}
//
////��������
//SpeechManager::~SpeechManager()
//{
//
//}