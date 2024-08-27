//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////函数对象
//class MyPrint
//{
//public:
//	void operator()(int num)
//	{
//		cout << num << endl;
//		m_Count++;
//	}
//
//	int m_Count = 0;
//};
//
//void myPrint02(int num)
//{
//	cout << num << endl;
//}
//
//void test1()
//{
//	MyPrint myPrint;
//	myPrint(100); //本质是一个类的对象，因此称为函数对象，也叫仿函数 100
//
//	myPrint02(100);//100
//}
//
//void test2()
//{
//	//函数对象 超出了普通函数的概念，可以拥有自己状态
//	MyPrint myPrint;
//	myPrint(100);//100
//	myPrint(100);//100
//	myPrint(100);//100
//	myPrint(100);//100
//
//	cout << "调用次数为： " << myPrint.m_Count << endl;//4
//}
//
////函数对象可以作为函数参数
//void doPrint(MyPrint myPrint, int num)
//{
//	myPrint(num);
//}
//
//void test3()
//{
//	doPrint(MyPrint(), 1000);//1000
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