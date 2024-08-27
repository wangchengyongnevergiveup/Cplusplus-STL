//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <stack>
//
////Stack栈容器
////1、stack构造函数
////stack<T> stkT;//stack采用模板类实现， stack对象的默认构造形式：
////stack(const stack &stk);//拷贝构造函数
////2、stack赋值操作
////stack& operator=(const stack &stk);//重载等号操作符
////3、stack数据存取操作
////push(elem);//向栈顶添加元素
////pop();//从栈顶移除第一个元素
////top();//返回栈顶元素
////4、stack大小操作
////empty();//判断堆栈是否为空
////size();//返回堆栈的大小
//
//void test1()
//{
//	stack<int>S;
//	//入栈
//	S.push(10);
//	S.push(20);
//	S.push(30);
//	S.push(40);
//
//	cout << "size  = " << S.size() << endl;//size  = 4
//
//	while (!S.empty())
//	{
//		//访问栈顶元素
//		cout << S.top() << endl;
//		//出栈
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