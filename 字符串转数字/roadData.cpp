#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
#include<vector>
using namespace std;

#include"implementation.h"

vector<int> str2num(string);

vector<road> roadData(string roadPath) {
	//以只读模式打开文件
	ifstream infile;
	infile.open(roadPath.data());//将文件流对象与文件链接起来
	assert(infile.is_open());//若失败，则输出错误消息

	string s;
	vector<int> temp;
	road roadtemp;
	vector<road> roadArray;
	while (getline(infile, s)) {

		temp = str2num(s);
		roadtemp.Id = temp[0];
		roadtemp.Len = temp[1];
		roadtemp.speed = temp[2];
		roadtemp.lane = temp[3];
		roadtemp.oriId = temp[4];
		roadtemp.desId = temp[5];
		roadArray.push_back(roadtemp);
	}
	roadArray.erase(roadArray.begin());
	infile.close();//关闭文件流
	return roadArray;
}