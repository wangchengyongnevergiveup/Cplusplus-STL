#include "fileManager.h"

void FileManager::parseLineToVector(string firstLine, vector<string>& vFirst)
{
	//解析单行到容器中
	//分割字符串到容器中
	int pos = -1;
	int start = 0;
	while (true)
	{
		pos = firstLine.find(",", start); //从0开始查找 ','
		if (pos == -1)
		{
			string tmp = firstLine.substr(start, firstLine.size() - start); //查找最后一个分割
			vFirst.push_back(tmp);
			break; //找不到break返回
		}
		string tmp = firstLine.substr(start, pos - start); //找到了,进行分割 参数1 起始位置，参数2 截取长度
		vFirst.push_back(tmp);
		start = pos + 1;
	}
		

}

//加载csv数据
void FileManager::loadCSVData(string path, map<string, map<string, string>>&mData)
{
	//输入流对象 读取文件
	ifstream ifs(path);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
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

		//map容器保存 <heroId,1> <heroName,亚瑟>
		map<string, string> m;
		for (int i = 0; i < vOther.size(); i++)
		{
			m.insert(make_pair(vFirst[i], vOther[i]));
		}

		//大容器中插入数据
		mData.insert(make_pair(vOther[0], m));
	}

	//关闭文件
	ifs.close();
}
	
