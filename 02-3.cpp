//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <queue>
//#include <string>
//
////Queue����
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test1()
//{
//	queue<Person> Q; //��������
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//���
//	Q.push(p1);
//	Q.push(p2);
//	Q.push(p3);
//	Q.push(p4);
//
//	cout << "size = " << Q.size() << endl;//size = 4
//
//	while (!Q.empty())
//	{
//		cout << "��ͷԪ��--- ������  " << Q.front().m_Name << " ���䣺 " << Q.front().m_Age << endl;//��ͷԪ��--- ������  aaa ���䣺 10;  ��ͷԪ��--- ������  bbb ���䣺 20
//		cout << "��βԪ��--- ������  " << Q.back().m_Name << " ���䣺 " << Q.back().m_Age << endl;//��βԪ��--- ������  ddd ���䣺 40; ��βԪ��--- ������  ddd ���䣺 40
//
//		//����
//		Q.pop();
//	}
//	cout << "size = " << Q.size() << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
