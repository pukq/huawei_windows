#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
#include<vector>
using namespace std;

#include"implementation.h"

vector<int> str2num(string);

vector<cross> crossData(string crossPath) {
	//��ֻ��ģʽ���ļ�
	ifstream infile;
	infile.open(crossPath.data());//���ļ����������ļ���������
	assert(infile.is_open());//��ʧ�ܣ������������Ϣ

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
	infile.close();//�ر��ļ���
	return crossArray;
}