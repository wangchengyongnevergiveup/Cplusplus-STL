//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//
////string容器
////1、string 构造函数
//void test1()
//{
//	string str;
//	string str2(str);
//	string str3 = "abc";
//	string str4(10, 'a');
//	cout << "str3 = " << str3 << endl;//str3 = abc
//	cout << "str4 = " << str4 << endl;//str4 = aaaaaaaaaa
//}
////2、string基本赋值操作
//void test2()
//{
//	string  str;
//	str = "abc";
//	str.assign("abcde", 3);
//	cout << str << endl;//abc
//
//	string str2;
//	str2.assign(str);
//	cout << str2 << endl;//abc
//
//	str2.assign(str, 0, 2);
//	cout << str2 << endl;//ab
//}
////3、string存取字符操作
//void test3()
//{
//	string str = "hello world";
//	//for (int i = 0; i < str.size();i++)
//	//{
//	//	//cout << str[i] << endl;
//	//	cout << str.at(i) << endl;
//	//}
//	//[]和at区别，[]访问越界 直接挂掉 ， at访问越界  抛出out_of_range异常
//	try
//	{
//		//cout << str[100] << endl;
//		cout << str.at(100) << endl;
//	}
//	catch (out_of_range& e)
//	{
//		cout << e.what() << endl;//invalid string position
//	}
//	catch (...)
//	{
//		cout << "异常捕获" << endl;
//	}
//}
////4、string拼接操作
////5、string查找和替换
//void test4()
//{
//	//拼接
//	string str1 = "我";
//	string str2 = "爱北京";
//	str1 += str2;
//	cout << str1 << endl;//我爱北京
//	str1.append("天安门");
//	cout << str1 << endl;//我爱北京天安门
//	//查找
//	string str = "abcdefgde";
//	int pos = str.find("de");
//	//int pos = str.rfind("de");
//	//rfind 是从右往左查找   //找到了字符串，位置为： 7
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到了字符串，位置为： " << pos << endl;//找到了字符串，位置为： 3
//	}
//	//替换
//	//string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
//	str.replace(1, 3, "11111");
//	//a11111efgde
//	cout << str << endl;//a11111efgde
//}	
////6、string比较操作
////compare函数在>时返回 1，<时返回 -1，==时返回 0。比较区分大小写，比较时参考字典顺序，排越前面的越小。大写的A比小写的a小。
////int compare(const string &s) const;//与字符串s比较 //int compare(const char *s) const;//与字符串s比较
//void test5()
//{
//	string str1 = "abcde";
//	string str2 = "abcdef";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 == str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 > str2" << endl;
//	}
//	else
//	{
//		cout << "str1 < str2" << endl;//str1 < str2
//	}
//}
////7、string子串
////string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
//void test6()
//{
//	string str = "abcdef";
//	string subStr =	str.substr(0, 3);
//	cout << subStr << endl;//abc
//
//	string email = "zhangtao@sina.com";
//	int pos = email.find("@"); // 8 从0开始算
//	string userName = email.substr(0, pos);//从1开始算
//	cout << userName << endl;//zhangtao
//}
////解析字符串
//void test7()
//{
//	string str = "www.itcast.com.cn";
//	vector<string> v; //将 www  itcast  com  cn 单词截取到 vector容器中
//
//	int start = 0;
//	int pos = -1;
//	while (true)
//	{
//		//www.itcast.com.cn
//		pos = str.find(".", start);
//		if (pos == -1)
//		{
//			//将cn截取出来
//			string tempStr = str.substr(start, str.size() - start);
//			v.push_back(tempStr);
//			break;
//		}
//		string tempStr = str.substr(start, pos - start);
//		v.push_back(tempStr);
//		start = pos + 1;
//	}
//
//	for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
////8、string插入和删除操作
//void test8()
//{
//	string str = "hello";
//	str.insert(1, "111");
//	//h111ello 
//	cout << str << endl;//h111ello
//
//	//删除 
//	str.erase(1, 3);
//	cout << str << endl;//hello
//}
////9、string和c-style字符串转换
//void doWork(string str)
//{
//
//}
//void doWork2(const char* str)
//{
//
//}
//void test9()
//{
//	const char* str = "abcd";
//	//const char * 转为 string
//	string s(str);
//	//string 转为 const char *
//	const char* str2 = s.c_str();
//
//	//const char * 可以隐式类型转换为  string
//	doWork(str2);
//	//string 不可以隐式类型转换为  const char* 
//	//doWork2(s);
//}
////下标操作符[]和at都会返回字符的引用,当字符串的内存被重新分配之后，可能发生错误.
//void test10()
//{
//	string s = "abcdefg";
//	char& a = s[2];
//	char& b = s[3];
//	a = '1';
//	b = '2';
//	cout << s << endl;//ab12efg
//	cout << (int*)s.c_str() << endl;//0000004ABE5AF9C0
//	s = "pppppppppppppppppppppppp";
//	//a = '1';
//	//b = '2';//取消这两行注释 程序会出错
//	cout << s << endl;//pppppppppppppppppppppppp
//	cout << (int*)s.c_str() << endl;//00000245DD10EBD0
//}
////写一个函数，函数内部将string字符串中的所有小写字母都变为大写字母。
//void test11()
//{
//	string str = "abcdEFg";
//	for (int i = 0; i < str.size(); i++)
//	{
//		//str[i] = toupper(str[i]);
//		str[i] = tolower(str[i]);
//	}
//	cout << str << endl;//abcdefg
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
//	//test7();
//	//test8();
//	//test9();
//	test10();
//	//test11();
//	system("pause");
//	return 0;
//}