//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <list>
//#include <algorithm>
//#include <string>
//
////list容器
////本质：双向循环链表
////void test1()
////{
////	list<int> myList;
////	for (int i = 0; i < 10; i++)
////	{
////		myList.push_back(i);
////	}
////
////	//C++标准库容器std::list的非公开成员 _Myhead、_Next 和 _Mysize，这些成员是标准库实现中的私有或保护成员，无法在用户代码中直接访问。
////	list<int>::_Nodeptr node = myList._Myhead->_Next;
////
////	for (int i = 0; i < myList._Mysize * 2; i++)
////	{
////		cout << "Node:" << node->_Myval << endl;
////		node = node->_Next;
////		if (node == myList._Myhead) {
////			node = node->_Next;
////			//node = node->_Prev//这两行代码证明是双向的
////		}
////	}
////	//结果：0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 证明是循环的
////}
//
////1、list构造函数
////2、list数据元素插入和删除操作
////遍历链表
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test2()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//	//正序遍历
//	//for (list<int>::iterator it = L1.begin(); it != L1.end();it++)
//	//{
//	//	cout << *it << endl;
//	//}
//	//逆序遍历
//	for (list<int>::reverse_iterator it = L1.rbegin(); it != L1.rend(); it++)
//	{
//		cout << *it << endl;// 30 20 10
//	}
//
//	//list迭代器是不是支持随机访问 ,答案：不支持，是一个双向迭代器
//	list<int>::iterator itBegin = L1.begin();
//	//itBegin = itBegin + 1;
//}
//
//void test3()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	printList(L);//300 200 100 10 20 30
//
//	L.pop_back(); //尾删
//	L.pop_front(); //头删
//	printList(L);//200 100 10 20
//
//	//插入
//	L.insert(L.begin(), 10000);
//	printList(L);//10000 200 100 10 20
//
//	L.erase(L.begin());
//	printList(L);//200 100 10 20
//
//	//remove 删除容器中所有与elem值匹配的元素。
//	L.push_back(100);
//	L.push_back(100);
//	printList(L);//200 100 10 20 100 100
//	L.remove(100);
//	printList(L);//200 10 20
//}
//
////3、list大小操作
////resize(num);//重新指定容器的长度为num，
////若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
////resize(num, elem);//重新指定容器的长度为num，
////若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
////4、list赋值操作
////5、list数据的存取
//void test4()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	L.swap(L2);
//	printList(L);//100 100 100 100 100 100 100 100 100 100
//}
//
////6、list反转排序
////reverse();//反转链表，比如lst包含1,3,5元素，运行此方法后，lst就包含5,3,1元素。
////sort(); //list排序
//bool myCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//
//void test5()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	printList(L);//300 200 100 10 20 30
//
//	//反转
//	L.reverse();
//	printList(L);//30 20 10 100 200 300
//
//	//排序  
//	//如果容器的迭代器支持随机访问，可以使用系统提供的标志算法
//	//不支持随机访问的迭代器的容器，内部会提供对应的算法接口
//	//sort(L.begin(), L.end());
//	L.sort(myCompare);
//	printList(L);//300 200 100 30 20 10
//}
//
//class Person
//{
//public:
//	Person(string name, int age, int height)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//
//	bool operator==(const Person& p) const
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age && this->m_Height == p.m_Height)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
//bool myComparePerson(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age)
//	{
//		return p1.m_Height < p2.m_Height;
//	}
//
//	return  p1.m_Age > p2.m_Age;
//}
//
//void test6()
//{
//	list<Person> L;
//
//	Person p1("亚瑟", 40, 180);
//	Person p2("赵云", 20, 160);
//	Person p3("妲己", 30, 120);
//	Person p4("孙悟空", 50, 200);
//	Person p5("关羽", 10, 170);
//	Person p6("刘备", 10, 165);
//	Person p7("张飞", 10, 185);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//	L.push_back(p7);
//
//	//按照年龄进行降序从大到下 , 如果年龄相等，按照身高进行升序 
//	//对于自定义数据类型，必须要指定排序规则
//	L.sort(myComparePerson);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
//	}
//
//	//删除孙悟空
//	L.remove(p4);//需要类型Person的==操作符来判断是否两个对象相等。 标准库的remove算法使用浅比较，因此它依赖于你提供的==操作符来比较对象是否相等。确认==操作符能够准确地比较两个Person对象
//
//	cout << "删除孙悟空后：" << endl;
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
//	}
//}
//
//int main() 
//{
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	test6();
//	system("pause");
//	return 0;
//}