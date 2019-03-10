#include<iostream>
#include<fstream>
#include<cassert>
#include<string>
#include<vector>
using namespace std;

#include"implementation.h"

vector<car> carData(string);//����ȡ���ļ��ýṹ�巵��
vector<road> roadData(string);
vector<cross> crossData(string);

int main(int argc, char *argv[])
{
	vector<vector<int> > cars;
	vector<car> CarArray;
	car cartemp;
	std::cout << "Begin" << std::endl;

	if (argc < 3) {
		std::cout << "please input args: carPath, roadPath, crossPath, answerPath" << std::endl;
		exit(1);
	}
	std::string carPath(argv[1]);
	std::string roadPath(argv[2]);
	std::string crossPath(argv[3]);
	/*
	std::string answerPath(argv[4]);

	std::cout << "carPath is " << carPath << std::endl;
	std::cout << "roadPath is " << roadPath << std::endl;
	std::cout << "crossPath is " << crossPath << std::endl;
	std::cout << "answerPath is " << answerPath << std::endl;
	*/

	// TODO:read input filebuf
	//car
	vector<car> carStructArray;
	carStructArray = carData(carPath);
	cout << "�������ݶ�ȡ�����" << endl;
	for (auto i : carStructArray) {
		cout << "carId:" << i.carId << " ";
		cout << "oriId:" << i.oriId << " ";
		cout << "desId:" << i.desId << " ";
		cout << "speed:" << i.speed << " ";
		cout << "time:" << i.time << endl;
	}
	//road
	vector<road> roadStructArray;
	roadStructArray = roadData(roadPath);
	cout << "��·���ݶ�ȡ�����" << endl;
	for (auto i : roadStructArray) {
		cout << "carId:" << i.Id << " ";
		cout << "oriId:" << i.Len << " ";
		cout << "desId:" << i.speed << " ";
		cout << "speed:" << i.lane << " ";
		cout << "speed:" << i.oriId<< " ";
		cout << "time:" << i.desId << endl;
	}
	//cross
	vector<cross> crossStructArray;
	crossStructArray = crossData(crossPath);
	cout << "·�����ݶ�ȡ�����" << endl;
	for (auto i : crossStructArray) {
		cout << "carId:" << i.id << " ";
		cout << "oriId:" << i.upId << " ";
		cout << "desId:" << i.rightId << " ";
		cout << "speed:" << i.downId << " ";
		cout << "time:" << i.leftId << endl;
	}

	//����

				   // TODO:process

				   // TODO:write output file

	return 0;
}