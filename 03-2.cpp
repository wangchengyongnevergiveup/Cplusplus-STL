//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////��������
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
//	myPrint(100); //������һ����Ķ�����˳�Ϊ��������Ҳ�зº��� 100
//
//	myPrint02(100);//100
//}
//
//void test2()
//{
//	//�������� ��������ͨ�����ĸ������ӵ���Լ�״̬
//	MyPrint myPrint;
//	myPrint(100);//100
//	myPrint(100);//100
//	myPrint(100);//100
//	myPrint(100);//100
//
//	cout << "���ô���Ϊ�� " << myPrint.m_Count << endl;//4
//}
//
////�������������Ϊ��������
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