//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <numeric> //accumulate�㷨ͷ�ļ�
//
////�������������㷨
////accumulate�㷨����������Ԫ���ۼ��ܺ�
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//	int num = accumulate(v.begin(), v.end(), 1000); // ����3���� �ۼ���ʼֵ
//	cout << "num = " << num << endl;//num = 6050
//}
//
////fill�㷨�������������Ԫ��
//void test2()
//{
//	vector<int>v;
//	v.resize(10);
//
//	fill(v.begin(), v.end(), 100);
//	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });//100 100 100 100 100 100 100 100 100 100
//	cout << endl;
//}
//
//int main() 
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}