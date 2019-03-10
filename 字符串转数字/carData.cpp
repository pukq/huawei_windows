#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
#include<vector>
using namespace std;

#include"implementation.h"

vector<int> str2num(string);

vector<car> carData(string carPath) {
	//��ֻ��ģʽ���ļ�
	ifstream infile;
	infile.open(carPath.data());//���ļ����������ļ���������
	assert(infile.is_open());//��ʧ�ܣ������������Ϣ

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
	infile.close();//�ر��ļ���
	return CarArray;
}