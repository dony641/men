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

Girl::Girl(int age, string name, int yanzhi){

	this->age = age;
	this->name = name;
	this->yanzhi = yanzhi;
}


Girl::~Girl()
{

}
int Girl::getAge()const{

	return age;
}

string Girl::getName()const{
	return name;
}

bool Girl::Satisfied(const Boy &boy)const{
	if (boy.getSalary()> YANZHI && age < BOY_AGE) {
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
	ret << "����" << "����" << name << age << "��ֵ" << yanzhi << endl;
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