//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <deque>
//#include <algorithm>
//
////deque����
////1��deque���캯��
////deque<T> deqT;//Ĭ�Ϲ�����ʽ
////deque(beg, end);//���캯����[beg, end)�����е�Ԫ�ؿ���������
////deque(n, elem);//���캯����n��elem����������
////deque(const deque &deq);//�������캯����
////2��deque��ֵ����
////assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
////assign(n, elem);//��n��elem������ֵ������
////deque& operator=(const deque &deq); //���صȺŲ�����
////swap(deq);// ��deq�뱾���Ԫ�ػ���
////3��deque��С����
////deque.size();//����������Ԫ�صĸ���
////deque.empty();//�ж������Ƿ�Ϊ��
////deque.resize(num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
////deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ��,���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//
//void printDeque(const deque<int>& d)
//{
//	//iterator��ͨ������
//	//reverse_iterator ��ת������
//	//const_iterator  ֻ��������
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 1000;
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_back(40);
//
//	deque<int>d2;
//	d2 = d;
//	printDeque(d2);//10 20 30 40
//
//	if (d2.empty())
//	{
//		cout << "d2Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d2��Ϊ�� size = " << d2.size() << endl;//d2��Ϊ�� size = 4
//	}
//}
//
////4��deque˫�˲����ɾ������
////push_back(elem);//������β�����һ������
////push_front(elem);//������ͷ������һ������
////pop_back();//ɾ���������һ������
////pop_front();//ɾ��������һ������
////5��deque���ݴ�ȡ
////at(idx);//��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range��
////operator[];//��������idx��ָ�����ݣ����idxԽ�磬���׳��쳣��ֱ�ӳ���
////front();//���ص�һ�����ݡ�
////back();//�������һ������
//
//void test2()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	printDeque(d);//300 200 100 10 20 30
//
//	d.pop_back(); //βɾ
//	d.pop_front(); //ͷɾ
//	printDeque(d);//200 100 10 20
//
//	cout << "��һ��Ԫ��Ϊ�� " << d.front() << endl;//��һ��Ԫ��Ϊ�� 200
//	cout << "���һ��Ԫ��Ϊ��" << d.back() << endl;//���һ��Ԫ��Ϊ��20
//}
//
////6��deque�������
////insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
////insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
////insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
////7��dequeɾ������
////clear();//�Ƴ���������������
////erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
////erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//
//void test3()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	//���� insert
//	d.insert(++d.begin(), 2, 1000);
//	//d.insert(d.begin()++, 2, 1000);//1000 1000 300 200 100 10 20 30
//	printDeque(d);//300 1000 1000 200 100 10 20 30
//
//	//ɾ��erase
//	//d.erase(++d.begin());//300 1000 200 100 10 20 30
//	deque<int>::iterator it1 = d.begin();
//	it1 = it1 + 1;
//	deque<int>::iterator it2 = d.begin();
//	it2 = it2 + 3;
//	d.erase(it1, it2);
//	printDeque(d);//300 200 100 10 20 30
//
//	//���
//	d.clear();
//	printDeque(d);//
//}
//
//bool myCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//void test4()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	//Ĭ�������С����
//	//sort(d.begin(), d.end());//10 20 30 100 200 300
//	sort(d.begin(), d.end(), myCompare);//300 200 100 30 20 10
//	printDeque(d);
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