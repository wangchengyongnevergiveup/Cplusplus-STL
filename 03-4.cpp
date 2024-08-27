//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <functional>  //内建函数对象头文件
//#include <vector>
//#include <algorithm>
//
////内建函数对象
////template<class T> T negate<T>//取反仿函数 一元运算
//void test1()
//{
//	negate<int>n;
//	cout << n(10) << endl;//-10
//}
//
////template<class T> T plus<T>//加法仿函数
//void test2()
//{
//	plus<int> p;
//	cout << p(10, 10) << endl;//20
//}
//
////template<class T> bool greater<T>//大于
//void test3()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//
//	//从大到小排序
//	sort(v.begin(), v.end(), greater<int>());//50 40 30 20 10
//	//sort(v.begin(), v.end(), less<int>());//10 20 30 40 50
//	//sort(v.begin(), v.end());//10 20 30 40 50
//	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
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