//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//
////string����
////1��string ���캯��
//void test1()
//{
//	string str;
//	string str2(str);
//	string str3 = "abc";
//	string str4(10, 'a');
//	cout << "str3 = " << str3 << endl;//str3 = abc
//	cout << "str4 = " << str4 << endl;//str4 = aaaaaaaaaa
//}
////2��string������ֵ����
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
////3��string��ȡ�ַ�����
//void test3()
//{
//	string str = "hello world";
//	//for (int i = 0; i < str.size();i++)
//	//{
//	//	//cout << str[i] << endl;
//	//	cout << str.at(i) << endl;
//	//}
//	//[]��at����[]����Խ�� ֱ�ӹҵ� �� at����Խ��  �׳�out_of_range�쳣
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
//		cout << "�쳣����" << endl;
//	}
//}
////4��stringƴ�Ӳ���
////5��string���Һ��滻
//void test4()
//{
//	//ƴ��
//	string str1 = "��";
//	string str2 = "������";
//	str1 += str2;
//	cout << str1 << endl;//�Ұ�����
//	str1.append("�찲��");
//	cout << str1 << endl;//�Ұ������찲��
//	//����
//	string str = "abcdefgde";
//	int pos = str.find("de");
//	//int pos = str.rfind("de");
//	//rfind �Ǵ����������   //�ҵ����ַ�����λ��Ϊ�� 7
//	if (pos == -1)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ����ַ�����λ��Ϊ�� " << pos << endl;//�ҵ����ַ�����λ��Ϊ�� 3
//	}
//	//�滻
//	//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//	str.replace(1, 3, "11111");
//	//a11111efgde
//	cout << str << endl;//a11111efgde
//}	
////6��string�Ƚϲ���
////compare������>ʱ���� 1��<ʱ���� -1��==ʱ���� 0���Ƚ����ִ�Сд���Ƚ�ʱ�ο��ֵ�˳����Խǰ���ԽС����д��A��Сд��aС��
////int compare(const string &s) const;//���ַ���s�Ƚ� //int compare(const char *s) const;//���ַ���s�Ƚ�
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
////7��string�Ӵ�
////string substr(int pos = 0, int n = npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���
//void test6()
//{
//	string str = "abcdef";
//	string subStr =	str.substr(0, 3);
//	cout << subStr << endl;//abc
//
//	string email = "zhangtao@sina.com";
//	int pos = email.find("@"); // 8 ��0��ʼ��
//	string userName = email.substr(0, pos);//��1��ʼ��
//	cout << userName << endl;//zhangtao
//}
////�����ַ���
//void test7()
//{
//	string str = "www.itcast.com.cn";
//	vector<string> v; //�� www  itcast  com  cn ���ʽ�ȡ�� vector������
//
//	int start = 0;
//	int pos = -1;
//	while (true)
//	{
//		//www.itcast.com.cn
//		pos = str.find(".", start);
//		if (pos == -1)
//		{
//			//��cn��ȡ����
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
////8��string�����ɾ������
//void test8()
//{
//	string str = "hello";
//	str.insert(1, "111");
//	//h111ello 
//	cout << str << endl;//h111ello
//
//	//ɾ�� 
//	str.erase(1, 3);
//	cout << str << endl;//hello
//}
////9��string��c-style�ַ���ת��
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
//	//const char * תΪ string
//	string s(str);
//	//string תΪ const char *
//	const char* str2 = s.c_str();
//
//	//const char * ������ʽ����ת��Ϊ  string
//	doWork(str2);
//	//string ��������ʽ����ת��Ϊ  const char* 
//	//doWork2(s);
//}
////�±������[]��at���᷵���ַ�������,���ַ������ڴ汻���·���֮�󣬿��ܷ�������.
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
//	//b = '2';//ȡ��������ע�� ��������
//	cout << s << endl;//pppppppppppppppppppppppp
//	cout << (int*)s.c_str() << endl;//00000245DD10EBD0
//}
////дһ�������������ڲ���string�ַ����е�����Сд��ĸ����Ϊ��д��ĸ��
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