//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//
////vector����
////1��vector��������ռ����
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//		cout << v.capacity() << endl;  // v.capacity()����������1 2 3 4 6 6 9 9 9 13
//	}
//}
////2��vector���캯��
////3��vector���ø�ֵ����
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
//	//vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
//	//���磺int arr[] = { 2,3,4,1,9 }; vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
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
//	cout << "v3��v4������" << endl;
//	v3.swap(v4);
//	printVector(v3);//100 100 100 100 100 100 100 100 100 100
//	printVector(v4);//10 20 30 40 50
//}
////4��vector��С����
////5��vector���ݴ�ȡ����
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
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ�� ����СΪ�� " << v1.size() << endl;//v1��Ϊ�� ����СΪ�� 5
//	}
//
//	v1.resize(10, 100); //�ڶ�����������Ĭ�����ֵ
//	printVector(v1);//10 20 30 40 50 100 100 100 100 100
//
//	v1.resize(3);
//	printVector(v1);//10 20 30
//
//	cout << "v1��front = " << v1.front() << endl;//v1��front = 10
//	cout << "v1��back  = " << v1.back() << endl;//v1��back  = 30
//}
////6��vector�����ɾ������
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
//	//v.erase(v.begin(), v.end()); �ȼ���  v.clear();
//	v.clear();
//	//v.erase(v.begin(), v.end());
//	printVector(v);// 
//}
//
////����1������swap�����ڴ�
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
//	//����swap�����ڴ�
//	vector<int>(v).swap(v);//vector<int>(v) ��������ֻ������v��ʼ����swap Ȼ����������������ִ������ͷ�
//	cout << "v.capacity = " << v.capacity() << endl;//v.capacity = 3
//	cout << "v.size = " << v.size() << endl;//v.size = 3
//}
////����2������ reserve Ԥ���ռ�
//void test6()
//{
//	vector<int>v;
//	v.reserve(100000);// ע�͵���num = 30 ����30���ڴ���ҵ������ڴ��
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
////7��vector�ĵ�����
//void test7()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//�������
//	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
//	{
//		cout << *it << endl;//50 40 30 20 10
//	}
//	
//	//vector�ĵ�������������ʵ�������֧����Ծ����
//	vector<int>::iterator itBegin = v.begin();
//	itBegin = itBegin + 3;
//	cout << *itBegin << endl;//40
//
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	list<int>::iterator itBegin2 = L.begin();
//	//itBegin2 = itBegin2 + 1;//list�����ĵ������ǲ�֧��������ʵ�
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