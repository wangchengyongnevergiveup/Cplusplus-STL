//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <map>
//
////map����
////1 map���캯��
////2 map��ֵ����
////swap(mp);//����������������
////3 map��С����
////4 map��������Ԫ�ز���
////map.insert(...); //����������Ԫ�أ�����pair<iterator,bool>
////map<int, string> mapStu;
////// ��һ�� ͨ��pair�ķ�ʽ�������
////mapStu.insert(pair<int, string>(3, "С��"));
////// �ڶ��� ͨ��pair�ķ�ʽ�������
////mapStu.inset(make_pair(-1, "У��"));
////// ������ ͨ��value_type�ķ�ʽ�������
////mapStu.insert(map<int, string>::value_type(1, "С��"));
////// ������ ͨ������ķ�ʽ����ֵ
////mapStu[3] = "С��";
////mapStu[5] = "С��";
//
//void test1()
//{
//	map<int, int> m;
//
//	//��һ�ֲ��뷽ʽ
//	m.insert(pair<int, int>(1, 10));
//
//	//�ڶ��ֲ��뷽ʽ  �Ƽ�
//	m.insert(make_pair(2, 20));
//
//	//�����ֲ��뷽ʽ
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//������
//	m[4] = 40;
//
//	m[10];
//	//cout << m[10] << endl; //������õ����֣�ʹ��δָ����key������һ��keyΪָ����ֵ��valueΪ0�����ݲ��뵽������
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//		//key = 1 value = 10; key = 2 value = 20; key = 3 value = 30; key = 4 value = 40; key = 10 value = 0
//	} 
//}
//
////5��mapɾ������
//void test2()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 40;
//
//	m.erase(3); //ɾ������keyֵ
//
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;//key = 1 value = 10; key = 2 value = 20;key = 4 value = 40
//	}
//}
//
////6��map���Ҳ���
////find(key);//���Ҽ�key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�������/�������ڣ�����map.end();
////count(keyElem);//����������keyΪkeyElem�Ķ����������map��˵��Ҫô��0��Ҫô��1����multimap��˵��ֵ���ܴ���1��
////lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
////upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
////equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
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
//		cout << "�ҵ��� keyΪ " << ret->first << " value = " << ret->second << endl;//�ҵ��� keyΪ 3 value = 30
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//ͳ�� count 
//	int num = m.count(4);
//	cout << "keyΪ4�Ķ������Ϊ�� " << num << endl;//keyΪ4�Ķ������Ϊ�� 1
//
//	//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
//	map<int, int>::iterator pos = m.lower_bound(3);
//	if (pos != m.end())
//	{
//		cout << "�ҵ���lower_bound key: " << pos->first << " value: " << pos->second << endl;
//		//�ҵ���lower_bound key: 3 value: 30
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
//	pos = m.upper_bound(3);
//	if (pos != m.end())
//	{
//		cout << "�ҵ���upper_bound key: " << pos->first << " value: " << pos->second << endl;
//		//�ҵ���upper_bound key: 4 value: 40
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	//equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
//	pair<map<int, int>::iterator, map<int, int>::iterator>  ret2 = m.equal_range(3);
//
//	if (ret2.first != m.end())
//	{
//		cout << "�ҵ���equal_range�е� lower_bound�� key =  " << ret2.first->first << " value = " << ret2.first->second << endl;
//		//�ҵ���equal_range�е� lower_bound�� key =  3 value = 30
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	if (ret2.second != m.end())
//	{
//		cout << "�ҵ���equal_range�е� upper_bound�� key =  " << ret2.second->first << " value = " << ret2.second->second << endl;
//		//�ҵ���equal_range�е� upper_bound�� key =  4 value = 40
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//}
//
//���÷º���ʵ��ָ���������
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