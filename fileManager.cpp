#include "fileManager.h"

void FileManager::parseLineToVector(string firstLine, vector<string>& vFirst)
{
	//�������е�������
	//�ָ��ַ�����������
	int pos = -1;
	int start = 0;
	while (true)
	{
		pos = firstLine.find(",", start); //��0��ʼ���� ','
		if (pos == -1)
		{
			string tmp = firstLine.substr(start, firstLine.size() - start); //�������һ���ָ�
			vFirst.push_back(tmp);
			break; //�Ҳ���break����
		}
		string tmp = firstLine.substr(start, pos - start); //�ҵ���,���зָ� ����1 ��ʼλ�ã�����2 ��ȡ����
		vFirst.push_back(tmp);
		start = pos + 1;
	}
		

}

//����csv����
void FileManager::loadCSVData(string path, map<string, map<string, string>>&mData)
{
	//���������� ��ȡ�ļ�
	ifstream ifs(path);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	} 

	string firstLine;
	ifs >> firstLine;
	//cout << "firstLine = " << firstLine << endl;
	vector<string> vFirst;
	parseLineToVector(firstLine,vFirst);
	//for (vector<string>::iterator it = vFirst.begin(); it != vFirst.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	/*string secondLine;
	ifs >> secondLine;
	cout << "secondLine = " << secondLine << endl;
	vector<string> vSecond;
	parseLineToVector(secondLine, vSecond);
	for (vector<string>::iterator it = vSecond.begin(); it != vSecond.end(); it++)
	{
		cout << *it << endl;
	}*/
	  
	string otherLine;
	//map<string,map<string, string>> mData;
	while (ifs >> otherLine)
	{
		//cout << "otherLine = " << otherLine << endl;
		vector<string> vOther;
		parseLineToVector(otherLine, vOther);
		/*for_each(vOther.begin(), vOther.end(), [](string val) {cout << val << " "; });
		cout << endl;*/

		//map�������� <heroId,1> <heroName,��ɪ>
		map<string, string> m;
		for (int i = 0; i < vOther.size(); i++)
		{
			m.insert(make_pair(vFirst[i], vOther[i]));
		}

		//�������в�������
		mData.insert(make_pair(vOther[0], m));
	}

	//�ر��ļ�
	ifs.close();
}
	
