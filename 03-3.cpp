//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
////ν��
////һԪν��
//class GreaterThan20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//
//void test1()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator ret = find_if(v.begin(), v.end(), GreaterThan20());
//	if (ret != v.end())
//	{
//		cout << "�ҵ�����20������Ϊ�� " << *ret << endl;//�ҵ�����20������Ϊ�� 30
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//
////��Ԫν��
//void myPrintInt(int val)
//{
//	cout << val << " ";
//}
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test2()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//
//	sort(v.begin(), v.end()); //��С����
//	for_each(v.begin(), v.end(), myPrintInt);//10 20 30 40 50
//	cout << endl;
//
//	sort(v.begin(), v.end(), MyCompare());
//	//lambda���ʽ  ��������  []����lambda���ʽ��־  [](){}
//	for_each(v.begin(), v.end(), [](int val) { cout << val << " "; });//50 40 30 20 10
//	cout << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}