//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <stack>
//
////Stackջ����
////1��stack���캯��
////stack<T> stkT;//stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ��
////stack(const stack &stk);//�������캯��
////2��stack��ֵ����
////stack& operator=(const stack &stk);//���صȺŲ�����
////3��stack���ݴ�ȡ����
////push(elem);//��ջ�����Ԫ��
////pop();//��ջ���Ƴ���һ��Ԫ��
////top();//����ջ��Ԫ��
////4��stack��С����
////empty();//�ж϶�ջ�Ƿ�Ϊ��
////size();//���ض�ջ�Ĵ�С
//
//void test1()
//{
//	stack<int>S;
//	//��ջ
//	S.push(10);
//	S.push(20);
//	S.push(30);
//	S.push(40);
//
//	cout << "size  = " << S.size() << endl;//size  = 4
//
//	while (!S.empty())
//	{
//		//����ջ��Ԫ��
//		cout << S.top() << endl;
//		//��ջ
//		S.pop();//40 30 20 10
//	}
//	cout << "size  = " << S.size() << endl;//size  = 0
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}