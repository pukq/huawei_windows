#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
#include<vector>
using namespace std;

#include"implementation.h"

vector<int> str2num(string);

vector<road> roadData(string roadPath) {
	//��ֻ��ģʽ���ļ�
	ifstream infile;
	infile.open(roadPath.data());//���ļ����������ļ���������
	assert(infile.is_open());//��ʧ�ܣ������������Ϣ

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
	infile.close();//�ر��ļ���
	return roadArray;
}