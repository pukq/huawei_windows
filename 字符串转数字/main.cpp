#include<iostream>
#include<fstream>
#include<cassert>
#include<string>
#include<vector>
using namespace std;

#include"implementation.h"

vector<car> carData(string);//将读取的文件用结构体返回
vector<road> roadData(string);
vector<cross> crossData(string);

int main(int argc, char *argv[])
{
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
	cout << "汽车数据读取结果：" << endl;
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
	cout << "道路数据读取结果：" << endl;
	for (auto i : roadStructArray) {
		cout << "Id:" << i.Id << " ";
		cout << "Len:" << i.Len << " ";
		cout << "speed:" << i.speed << " ";
		cout << "lane:" << i.lane << " ";
		cout << "oriId:" << i.oriId<< " ";
		cout << "desId:" << i.desId << endl;
	}
	//cross
	vector<cross> crossStructArray;
	crossStructArray = crossData(crossPath);
	cout << "路口数据读取结果：" << endl;
	for (auto i : crossStructArray) {
		cout << "id:" << i.id << " ";
		cout << "upId:" << i.upId << " ";
		cout << "rightId:" << i.rightId << " ";
		cout << "downId:" << i.downId << " ";
		cout << "leftId:" << i.leftId << endl;
	}

	//继续

				   // TODO:process

				   // TODO:write output file

	return 0;
}