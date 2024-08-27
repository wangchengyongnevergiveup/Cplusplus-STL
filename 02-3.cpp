//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <queue>
//#include <string>
//
////Queue容器
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test1()
//{
//	queue<Person> Q; //队列容器
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//入队
//	Q.push(p1);
//	Q.push(p2);
//	Q.push(p3);
//	Q.push(p4);
//
//	cout << "size = " << Q.size() << endl;//size = 4
//
//	while (!Q.empty())
//	{
//		cout << "队头元素--- 姓名：  " << Q.front().m_Name << " 年龄： " << Q.front().m_Age << endl;//队头元素--- 姓名：  aaa 年龄： 10;  队头元素--- 姓名：  bbb 年龄： 20
//		cout << "队尾元素--- 姓名：  " << Q.back().m_Name << " 年龄： " << Q.back().m_Age << endl;//队尾元素--- 姓名：  ddd 年龄： 40; 队尾元素--- 姓名：  ddd 年龄： 40
//
//		//出队
//		Q.pop();
//	}
//	cout << "size = " << Q.size() << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
