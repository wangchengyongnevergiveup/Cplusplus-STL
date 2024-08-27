#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//�ļ�������
class FileManager
{
public:
	//�����������ݵ�vector������
	void parseLineToVector(string line, vector<string>& v);

	//����csv����
	void loadCSVData(string path, map<string, map<string, string>>& mData);
};