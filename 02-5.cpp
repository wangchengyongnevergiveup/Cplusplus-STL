//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <set>
//#include <string>
//
////set容器
////1、set构造函数
////2、set赋值操作
////3、set大小操作
////4、set插入和删除操作
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	set<int>s;
//
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//	printSet(s);//10 20 30 40 50
//
//	if (s.empty())
//	{
//		cout << "set容器为空" << endl;
//	}
//	else
//	{
//		cout << "set容器不为空  大小为： " << s.size() << endl;//set容器不为空  大小为： 5
//	}
//
//	s.erase(30);
//	printSet(s);//10 20 40 50
//}
//
////5、set查找操作
////find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
////count(key);//查找键key的元素个数
////lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
////upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
////equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
//
//void test2()
//{
//	set<int>s;
//
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	set<int>::iterator pos = s.find(30);
//	if (pos != s.end())
//	{
//		cout << "找到了元素：" << *pos << endl;//找到了元素：30
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//对于set而言，count的结果  要么是0  要么是1
//	int num = s.count(40);
//	cout << "key为40的个数为：" << num << endl;//key为40的个数为：1
//
//	//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
//	set<int>::iterator pos2 = s.lower_bound(30);
//	if (pos2 != s.end())
//	{
//		cout << "lower_bound的值为：" << *pos2 << endl;//lower_bound的值为：30
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
//	pos2 = s.upper_bound(30);
//	if (pos2 != s.end())
//	{
//		cout << "upper_bound的值为：" << *pos2 << endl;//upper_bound的值为：40
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。  equal_range返回的是pair
//	pair< set<int>::iterator, set<int>::iterator>  ret = s.equal_range(30);
//	if (ret.first != s.end())
//	{
//		cout << "equal_range中的lower_bound的值为：" << *ret.first << endl;//equal_range中的lower_bound的值为：30
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//	if (ret.second != s.end())
//	{
//		cout << "equal_range中的upper_bound的值为：" << *ret.second << endl;//equal_range中的upper_bound的值为：40
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//}
//
////pair创建
//void test3()
//{
//	pair<string, int> p("Tom", 10);
//	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;//姓名： Tom 年龄： 10
//
//	pair<string, int> p2 = make_pair("Jerry", 18);
//	cout << "姓名： " << p2.first << " 年龄： " << p.second << endl;//姓名： Jerry 年龄： 10
//}
//
//void test4()
//{
//	//insert 返回的是pair
//	set<int>s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;//第一次插入成功
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;//第二次插入失败
//	}
//	printSet(s); //10
//
//	//允许插入重复的key值
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//	cout << "---------" << endl;
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << (*it) << endl;//10 10
//	}
//}
//
////在C++中，STL容器会将比较函数对象视为常量对象，因此需要确保operator()方法本身是const的。
//class myCompareInt
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void test5()
//{
//	//set容器的排序规则要在插入之前指定
//	set<int, myCompareInt> s;
//
//	s.insert(10);
//	s.insert(50);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	for (set<int, myCompareInt>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << endl;// 50 40 30 20 10
//	}
//}
//
////对于自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class myComparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		//按照年龄 升序  从小到大
//		return p1.m_Age < p2.m_Age;
//	}
//};
//
//void test6()
//{
//	//利用仿函数  指定出自定义数据类型的排序规则
//	set<Person, myComparePerson> s;
//	Person p1("aaa", 10);
//	Person p2("bbb", 40);
//	Person p3("ccc", 20);
//	Person p4("ddd", 30);
//	Person p5("eee", 50);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//
//	for (set<Person, myComparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名： " << (*it).m_Name << " 年龄： " << (*it).m_Age << endl;
//	}
//
//}
//
//int main() 
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	test6();
//	system("pause");
//	return 0;
//}