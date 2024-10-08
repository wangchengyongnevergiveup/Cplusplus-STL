//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
////常用集合算法
////set_intersection算法 求两个set集合的交集
////注意:两个集合必须是有序序列
////@param beg1 容器1开始迭代器
////@param end1 容器1结束迭代器
////@param beg2 容器2开始迭代器
////@param end2 容器2结束迭代器
////@param dest  目标容器开始迭代器
////@return 目标容器的最后一个元素的迭代器地址
//void test1()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	//不要用vTarget.end()，itEnd 返回的是目标容器的最后一个元素的迭代器地址
//	for_each(vTarget.begin(), itEnd, [](int val) {cout << val << " "; });//5 6 7 8 9
//	cout << endl;
//}
//
////set_union算法 求两个set集合的并集
////注意:两个集合必须是有序序列
////@param beg1 容器1开始迭代器
////@param end1 容器1结束迭代器
////@param beg2 容器2开始迭代器
////@param end2 容器2结束迭代器
////@param dest  目标容器开始迭代器
////@return 目标容器的最后一个元素的迭代器地址
//void test2()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, [](int val) {cout << val << " "; });//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
//	cout << endl;
//}
//
////set_difference算法 求两个set集合的差集
////注意:两个集合必须是有序序列
////@param beg1 容器1开始迭代器
////@param end1 容器1结束迭代器
////@param beg2 容器2开始迭代器
////@param end2 容器2结束迭代器
////@param dest  目标容器开始迭代器
////@return 目标容器的最后一个元素的迭代器地址
//void test3()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(max(v1.size(), v2.size()));
//
//	// A 与 B 差集
//	//vector<int>::iterator itEnd  = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	// B 与 A 差集
//	vector<int>::iterator itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, [](int val) {cout << val << " "; });//10 11 12 13 14
//	cout << endl;
//}
//
//int main() 
//{
//	test1();
//	test2();
//	test3();
//	system("pause");
//	return 0;
//}