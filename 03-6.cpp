//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>
//
////���ñ����㷨
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << endl;
//		m_Count++;
//	}
//
//	int m_Count = 0;
//};
//
////for_each ���ڱ���
////�з���ֵ��
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	MyPrint print = for_each(v.begin(), v.end(), MyPrint());//0 1 2 3 4 5 6 7 8 9
//	cout << "print.count = " << print.m_Count << endl;//print.count = 10
//}
//
////for_each���԰󶨲������
//class MyPrint2 :public binary_function<int, int, void>
//{
//public:
//	void operator()(int val, int start) const
//	{
//		cout << val << endl;
//	}
//
//};
//void test2()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), bind2nd(MyPrint2(), 1000));//0 1 2 3 4 5 6 7 8 9
//}
//
////transform�㷨 ��ָ����������Ԫ�ذ��˵���һ������
//class MyTransform
//{
//public:
//	int operator()(int val)
//	{
//		return val + 10000;
//	}
//};
//void test3()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>v2;
//	v2.resize(v.size());//ע�͵� �����
//
//	transform(v.begin(), v.end(), v2.begin(), MyTransform());
//	for_each(v2.begin(), v2.end(), [](int val) {cout << val << " "; });//10000 10001 10002 10003 10004 10005 10006 10007 10008 10009
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	system("pause");
//	return 0;
//}