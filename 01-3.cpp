//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//
////vector容器
////1、vector容器扩充空间机制
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//		cout << v.capacity() << endl;  // v.capacity()容器的容量1 2 3 4 6 6 9 9 9 13
//	}
//}
////2、vector构造函数
////3、vector常用赋值操作
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test2()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	//vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
//	//例如：int arr[] = { 2,3,4,1,9 }; vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);//10 20 30 40 50
//
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);//10 20 30 40 50
//
//	vector<int>v4(10, 100);
//	printVector(v4);//100 100 100 100 100 100 100 100 100 100
//
//	cout << "v3和v4互换后：" << endl;
//	v3.swap(v4);
//	printVector(v3);//100 100 100 100 100 100 100 100 100 100
//	printVector(v4);//10 20 30 40 50
//}
////4、vector大小操作
////5、vector数据存取操作
//void test3()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空 ，大小为： " << v1.size() << endl;//v1不为空 ，大小为： 5
//	}
//
//	v1.resize(10, 100); //第二个参数代表默认填充值
//	printVector(v1);//10 20 30 40 50 100 100 100 100 100
//
//	v1.resize(3);
//	printVector(v1);//10 20 30
//
//	cout << "v1的front = " << v1.front() << endl;//v1的front = 10
//	cout << "v1的back  = " << v1.back() << endl;//v1的back  = 30
//}
////6、vector插入和删除操作
//void test4()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	v.insert(v.begin(), 100);
//	printVector(v);//100 10 20 30 40
//
//	v.push_back(1000);
//	printVector(v);//100 10 20 30 40 1000
//
//	v.pop_back();
//	printVector(v);//100 10 20 30 40
//
//	v.erase(v.begin());
//	printVector(v);//10 20 30 40
//
//	//v.erase(v.begin(), v.end()); 等价于  v.clear();
//	v.clear();
//	//v.erase(v.begin(), v.end());
//	printVector(v);// 
//}
//
////案例1：巧用swap收缩内存
//void test5()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v.capacity = " << v.capacity() << endl;//v.capacity = 138255
//	cout << "v.size = " << v.size() << endl;//v.size = 100000
//
//	v.resize(3);
//	cout << "v.capacity = " << v.capacity() << endl;//v.capacity = 138255
//	cout << "v.size = " << v.size() << endl;//v.size = 3
//
//	//巧用swap收缩内存
//	vector<int>(v).swap(v);//vector<int>(v) 匿名对象只不过用v初始化；swap 然后匿名对象在这行执行完后释放
//	cout << "v.capacity = " << v.capacity() << endl;//v.capacity = 3
//	cout << "v.size = " << v.size() << endl;//v.size = 3
//}
////案例2：巧用 reserve 预留空间
//void test6()
//{
//	vector<int>v;
//	v.reserve(100000);// 注释掉：num = 30 开辟30次内存才找到合适内存块
//	int* p = NULL;
//	int num = 0;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num = " << num << endl;//num = 1
//}
//
////7、vector的迭代器
//void test7()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//逆序遍历
//	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
//	{
//		cout << *it << endl;//50 40 30 20 10
//	}
//	
//	//vector的迭代器是随机访问迭代器，支持跳跃访问
//	vector<int>::iterator itBegin = v.begin();
//	itBegin = itBegin + 3;
//	cout << *itBegin << endl;//40
//
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	list<int>::iterator itBegin2 = L.begin();
//	//itBegin2 = itBegin2 + 1;//list容器的迭代器是不支持随机访问的
//	cout << *itBegin2 << endl;//10
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	test7();
//	system("pause");
//	return 0;
//}