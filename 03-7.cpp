//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <functional>
////���ò����㷨
////find�㷨 ����Ԫ��
////@param beg ������ʼ������
////@param end ��������������
////@param value ���ҵ�Ԫ��
////@return ���ز���Ԫ�ص�λ��
////find_if�㷨 ��������
////@param beg ������ʼ������
////@param end ��������������
////@param  callback �ص���������ν��(����bool���͵ĺ�������)
////@return bool ���ҷ���true ����false
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
//	if (pos != v.end())
//	{
//		cout << "�ҵ���Ԫ�أ�" << *pos << endl;//�ҵ���Ԫ�أ�5
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test2()
//{
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator pos = find(v.begin(), v.end(), p2);
//	if (pos != v.end())
//	{
//		cout << "�ҵ���Ԫ��  ������ " << (*pos).m_Name << " ���䣺 " << (*pos).m_Age << endl;//�ҵ���Ԫ��  ������ bbb ���䣺 20
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//
//class MyComparePerson :public binary_function< Person*, Person*, bool>
//{
//public:
//	bool operator()(Person* p1, Person* p2) const
//	{
//		return p1->m_Name == p2->m_Name && p1->m_Age == p2->m_Age;//
//	}
//};
//
//void test3()
//{
//	vector<Person*> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//
//	Person* p = new Person("bbb", 20);
//	vector<Person*>::iterator pos = find_if(v.begin(), v.end(), bind2nd(MyComparePerson(), p));
//	if (pos != v.end())
//	{
//		cout << "�ҵ���Ԫ��--- ������ " << (*pos)->m_Name << " ���䣺 " << (*pos)->m_Age << endl;//�ҵ���Ԫ��--- ������ bbb ���䣺 20
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//
////adjacent_find�㷨 ���������ظ�Ԫ��
//void test4()
//{
//	vector<int>v;
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(300);
//	v.push_back(300);
//	v.push_back(6);
//	v.push_back(3);
//
//	vector<int>::iterator ret = adjacent_find(v.begin(), v.end());
//	if (ret != v.end())
//	{
//		cout << "�ҵ������ڵ��ظ�Ԫ�أ� " << *ret << endl;//�ҵ������ڵ��ظ�Ԫ�أ� 300
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//
////binary_search�㷨 ���ֲ��ҷ�ע��: �����������в�����
//void test5()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//v.push_back(4);  �������������У�������� ���δ֪
//
//	bool ret = binary_search(v.begin(), v.end(), 2);
//	if (ret)
//	{
//		cout << "�鵽������2" << endl;//�鵽������2
//	}
//	else
//	{
//		cout << "δ�ҵ�����2" << endl;
//	}
//}
//
////count�㷨 ͳ��Ԫ�س��ִ���
////@param beg ������ʼ������
////@param end ��������������
////@param  value�ص���������ν��(����bool���͵ĺ�������)
////@return int����Ԫ�ظ���
//class GreaterThan3
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 3;
//	}
//};
//
//void test6()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	v.push_back(3);
//	v.push_back(3);
//	v.push_back(3);
//
//	int num = count(v.begin(), v.end(), 3);
//	cout << "3�ĸ���Ϊ�� " << num << endl;//3�ĸ���Ϊ�� 4
//
//	//ͳ�ƴ��ڵ���3�ĸ���
//	num = count_if(v.begin(), v.end(), GreaterThan3());
//	// 0 1 2 3 4 5 6 7 8 9 3 3 3 
//	cout << "���ڵ���3�ĸ���Ϊ�� " << num << endl;//���ڵ���3�ĸ���Ϊ�� 10
//}
//
//int main() 
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	test5();
//	test6();
//	system("pause");
//	return 0;
//}