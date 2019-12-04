#include "Girl.h"
#include <sstream>
#include <iostream>
#include <vector>
#include "Boy.h"
#define BOY_AGE 22
#define YANZHI  80

//Girl::Girl()
//{
//	age = 0;
//	name = "";
//	yanzhi = 0;
//}


Girl::Girl(int age, string name, int yanzhi):Single(age,name){

	/*this->age = age;
	this->name = name;*/
	this->yanzhi = yanzhi;
}

Girl::~Girl()

{

}


bool Girl::Satisfied(const Boy &boy)const{
	if (boy.getSalary() >= yanzhi * YANZHI){
		return true;
	}
	else {
		return false;
	}
}

int Girl::getYanzhi()const{
	return yanzhi;
}
string Girl::description()const{
	stringstream ret;
	ret << "����" << getAge()<<"����"<<getName()<< "��ֵ" << yanzhi << endl;
	return ret.str();
}


void Girl::inputGirls(vector<Girl> &girls){
	int age;
	string name;
	int yanzhi;
	int index = 1;
		while (1) {
			cout << "������ڼ���" << index << "λС��������[����0����]";
			cin >> age;
			if (age == 0) {
				break;
			}
			cout << "������ĵ�" << index << "λС��������";
			cin >> name;
			cout << "�������" << index << "λС������ֵ";
			cin >> yanzhi;

			girls.push_back(Girl(age, name, yanzhi));
			index++;

		}
}