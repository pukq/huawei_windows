#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
#include<vector>
using namespace std;

#include"implementation.h"

vector<int> str2num(string);

vector<cross> crossData(string crossPath) {
	//以只读模式打开文件
	ifstream infile;
	infile.open(crossPath.data());//将文件流对象与文件链接起来
	assert(infile.is_open());//若失败，则输出错误消息

	string s;
	vector<int> temp;
	cross crosstemp;
	vector<cross> crossArray;
	while (getline(infile, s)) {

		temp = str2num(s);
		crosstemp.id = temp[0];
		crosstemp.upId = temp[1];
		crosstemp.rightId = temp[2];
		crosstemp.downId = temp[3];
		crosstemp.leftId = temp[4];
		crossArray.push_back(crosstemp);
	}
	crossArray.erase(crossArray.begin());
	infile.close();//关闭文件流
	return crossArray;
}