//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <set>
//#include <string>
//
////set����
////1��set���캯��
////2��set��ֵ����
////3��set��С����
////4��set�����ɾ������
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	set<int>s;
//
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//	printSet(s);//10 20 30 40 50
//
//	if (s.empty())
//	{
//		cout << "set����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "set������Ϊ��  ��СΪ�� " << s.size() << endl;//set������Ϊ��  ��СΪ�� 5
//	}
//
//	s.erase(30);
//	printSet(s);//10 20 40 50
//}
//
////5��set���Ҳ���
////find(key);//���Ҽ�key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
////count(key);//���Ҽ�key��Ԫ�ظ���
////lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
////upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
////equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
//
//void test2()
//{
//	set<int>s;
//
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	set<int>::iterator pos = s.find(30);
//	if (pos != s.end())
//	{
//		cout << "�ҵ���Ԫ�أ�" << *pos << endl;//�ҵ���Ԫ�أ�30
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//����set���ԣ�count�Ľ��  Ҫô��0  Ҫô��1
//	int num = s.count(40);
//	cout << "keyΪ40�ĸ���Ϊ��" << num << endl;//keyΪ40�ĸ���Ϊ��1
//
//	//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
//	set<int>::iterator pos2 = s.lower_bound(30);
//	if (pos2 != s.end())
//	{
//		cout << "lower_bound��ֵΪ��" << *pos2 << endl;//lower_bound��ֵΪ��30
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
//	pos2 = s.upper_bound(30);
//	if (pos2 != s.end())
//	{
//		cout << "upper_bound��ֵΪ��" << *pos2 << endl;//upper_bound��ֵΪ��40
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������  equal_range���ص���pair
//	pair< set<int>::iterator, set<int>::iterator>  ret = s.equal_range(30);
//	if (ret.first != s.end())
//	{
//		cout << "equal_range�е�lower_bound��ֵΪ��" << *ret.first << endl;//equal_range�е�lower_bound��ֵΪ��30
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	if (ret.second != s.end())
//	{
//		cout << "equal_range�е�upper_bound��ֵΪ��" << *ret.second << endl;//equal_range�е�upper_bound��ֵΪ��40
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//}
//
////pair����
//void test3()
//{
//	pair<string, int> p("Tom", 10);
//	cout << "������ " << p.first << " ���䣺 " << p.second << endl;//������ Tom ���䣺 10
//
//	pair<string, int> p2 = make_pair("Jerry", 18);
//	cout << "������ " << p2.first << " ���䣺 " << p.second << endl;//������ Jerry ���䣺 10
//}
//
//void test4()
//{
//	//insert ���ص���pair
//	set<int>s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;//��һ�β���ɹ�
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;//�ڶ��β���ʧ��
//	}
//	printSet(s); //10
//
//	//��������ظ���keyֵ
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//	cout << "---------" << endl;
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << (*it) << endl;//10 10
//	}
//}
//
////��C++�У�STL�����Ὣ�ȽϺ���������Ϊ�������������Ҫȷ��operator()����������const�ġ�
//class myCompareInt
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void test5()
//{
//	//set�������������Ҫ�ڲ���֮ǰָ��
//	set<int, myCompareInt> s;
//
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	for (set<int, myCompareInt>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << endl;// 50 40 30 20 10
//	}
//}
//
////�����Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class myComparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		//�������� ����  ��С����
//		return p1.m_Age < p2.m_Age;
//	}
//};
//
//void test6()
//{
//	//���÷º���  ָ�����Զ����������͵��������
//	set<Person, myComparePerson> s;
//	Person p1("aaa", 10);
//	Person p2("bbb", 40);
//	Person p3("ccc", 20);
//	Person p4("ddd", 30);
//	Person p5("eee", 50);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//
//	for (set<Person, myComparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "������ " << (*it).m_Name << " ���䣺 " << (*it).m_Age << endl;
//	}
//
//}
//
//int main() 
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	test6();
//	system("pause");
//	return 0;
//}