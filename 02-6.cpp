//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <map>
//
////map容器
////1 map构造函数
////2 map赋值操作
////swap(mp);//交换两个集合容器
////3 map大小操作
////4 map插入数据元素操作
////map.insert(...); //往容器插入元素，返回pair<iterator,bool>
////map<int, string> mapStu;
////// 第一种 通过pair的方式插入对象
////mapStu.insert(pair<int, string>(3, "小张"));
////// 第二种 通过pair的方式插入对象
////mapStu.inset(make_pair(-1, "校长"));
////// 第三种 通过value_type的方式插入对象
////mapStu.insert(map<int, string>::value_type(1, "小李"));
////// 第四种 通过数组的方式插入值
////mapStu[3] = "小刘";
////mapStu[5] = "小王";
//
//void test1()
//{
//	map<int, int> m;
//
//	//第一种插入方式
//	m.insert(pair<int, int>(1, 10));
//
//	//第二种插入方式  推荐
//	m.insert(make_pair(2, 20));
//
//	//第三种插入方式
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//第四种
//	m[4] = 40;
//
//	m[10];
//	//cout << m[10] << endl; //如果利用第四种，使用未指定的key，生成一个key为指定的值，value为0的数据插入到容器中
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//		//key = 1 value = 10; key = 2 value = 20; key = 3 value = 30; key = 4 value = 40; key = 10 value = 0
//	} 
//}
//
////5、map删除操作
//void test2()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 40;
//
//	m.erase(3); //删除传入key值
//
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;//key = 1 value = 10; key = 2 value = 20;key = 4 value = 40
//	}
//}
//
////6、map查找操作
////find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；/若不存在，返回map.end();
////count(keyElem);//返回容器中key为keyElem的对组个数。对map来说，要么是0，要么是1。对multimap来说，值可能大于1。
////lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
////upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
////equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
//void test3()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 40;
//
//	map<int, int>::iterator ret = m.find(3);
//	if (ret != m.end())
//	{
//		cout << "找到了 key为 " << ret->first << " value = " << ret->second << endl;//找到了 key为 3 value = 30
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//统计 count 
//	int num = m.count(4);
//	cout << "key为4的对组个数为： " << num << endl;//key为4的对组个数为： 1
//
//	//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
//	map<int, int>::iterator pos = m.lower_bound(3);
//	if (pos != m.end())
//	{
//		cout << "找到了lower_bound key: " << pos->first << " value: " << pos->second << endl;
//		//找到了lower_bound key: 3 value: 30
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
//	pos = m.upper_bound(3);
//	if (pos != m.end())
//	{
//		cout << "找到了upper_bound key: " << pos->first << " value: " << pos->second << endl;
//		//找到了upper_bound key: 4 value: 40
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
//	pair<map<int, int>::iterator, map<int, int>::iterator>  ret2 = m.equal_range(3);
//
//	if (ret2.first != m.end())
//	{
//		cout << "找到了equal_range中的 lower_bound的 key =  " << ret2.first->first << " value = " << ret2.first->second << endl;
//		//找到了equal_range中的 lower_bound的 key =  3 value = 30
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	if (ret2.second != m.end())
//	{
//		cout << "找到了equal_range中的 upper_bound的 key =  " << ret2.second->first << " value = " << ret2.second->second << endl;
//		//找到了equal_range中的 upper_bound的 key =  4 value = 40
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//}
//
//利用仿函数实现指定排序规则
//class myCompareInt
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//void test4()
//{
//	map<int, int, myCompareInt> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 40;
//
//	for (map<int, int, myCompareInt>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//		//key = 4 value = 40 key = 3 value = 30 key = 2 value = 20 key = 1 value = 10
//	}
//}
//
//int main() 
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	system("pause");
//	return 0;
//}