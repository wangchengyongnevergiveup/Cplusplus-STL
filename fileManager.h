#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//文件管理类
class FileManager
{
public:
	//解析单行数据到vector容器中
	void parseLineToVector(string line, vector<string>& v);

	//加载csv数据
	void loadCSVData(string path, map<string, map<string, string>>& mData);
};