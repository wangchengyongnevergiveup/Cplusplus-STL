//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <ctime>
//
////���������㷨
////merge�㷨 ����Ԫ�غϲ������洢����һ������
////ע�� : �������������������,˳��Ҫһ��
//void test1()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	vector<int>vTarget; //Ŀ������
//	vTarget.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), [](int val) {cout << val << " "; });//0 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10
//	cout << endl;
//}
//
////sort
//void test2()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//��������
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });//9 8 7 6 5 4 3 2 1 0
//	cout << endl;
//}
//
////random_shuffle�㷨 ��ָ����Χ�ڵ�Ԫ�������������
//void test3()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });//6 7 0 2 5 9 8 4 1 3
//	cout << endl;
//}
//
////reverse�㷨 ��תָ����Χ��Ԫ��
//void test4()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "��תǰ��ӡ��" << endl;
//	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });//0 1 2 3 4 5 6 7 8 9
//	cout << endl;
//
//	reverse(v.begin(), v.end());
//
//	cout << "��ת���ӡ�� " << endl;
//	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });//9 8 7 6 5 4 3 2 1 0
//	cout << endl;
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	test1();
//	test2();
//	test3();
//	test4();
//	system("pause");
//	return 0;
//}