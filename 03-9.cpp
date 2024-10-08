//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
////常用拷贝和替换算法
////copy算法 将容器内指定范围的元素拷贝到另一容器中
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>v2;
//	v2.resize(v.size());
//	copy(v.begin(), v.end(), v2.begin());
//
//	//for_each(v2.begin(), v2.end(), [](int val){cout << val << " "; });
//	//cout << endl;
//
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));//0 1 2 3 4 5 6 7 8 9
//	cout << endl;
//}
//
////replace算法 将容器内指定范围的旧元素修改为新元素
////replace_if(iterator beg, iterator end, _callback, newvalue) 按条件替换
//class MyReplace
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 3;
//	}
//};
//void test2()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//将容器中的3替换为 3000
//	replace(v.begin(), v.end(), 3, 3000);
//
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));//0 1 2 3000 4 5 6 7 8 9
//	cout << endl;
//
//	//将容器中所有大于3的都替换为 30000;
//	replace_if(v.begin(), v.end(), MyReplace(), 30000);
//	// 0 1 2 30000 ...
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));//0 1 2 30000 30000 30000 30000 30000 30000 30000
//	cout << endl;
//}
//
////swap交换
//void test3()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>v2(10, 100);
//
//	cout << "交换数据前：" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));//0 1 2 3 4 5 6 7 8 9
//	cout << endl;
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));//100 100 100 100 100 100 100 100 100 100
//	cout << endl;
//
//	swap(v, v2);
//
//	cout << "交换数据后：" << endl;
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));//100 100 100 100 100 100 100 100 100 100
//	cout << endl;
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));//0 1 2 3 4 5 6 7 8 9
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