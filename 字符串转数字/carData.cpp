#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
#include<vector>
using namespace std;

#include"implementation.h"

vector<int> str2num(string);

vector<car> carData(string carPath) {
	//以只读模式打开文件
	ifstream infile;
	infile.open(carPath.data());//将文件流对象与文件链接起来
	assert(infile.is_open());//若失败，则输出错误消息

	string s;
	vector<int> temp;
	car cartemp;
	vector<car> CarArray;
	while (getline(infile, s)) {
		
		temp = str2num(s);
		cartemp.carId = temp[0];
		cartemp.oriId = temp[1];
		cartemp.desId = temp[2];
		cartemp.speed = temp[3];
		cartemp.time = temp[4];
		CarArray.push_back(cartemp);
	}
	CarArray.erase(CarArray.begin());
	infile.close();//关闭文件流
	return CarArray;
}