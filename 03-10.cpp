//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <numeric> //accumulate算法头文件
//
////常用算数生成算法
////accumulate算法：计算容器元素累计总和
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//	int num = accumulate(v.begin(), v.end(), 1000); // 参数3代表 累加起始值
//	cout << "num = " << num << endl;//num = 6050
//}
//
////fill算法：向容器中添加元素
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