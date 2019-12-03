#include "Girl.h"
#include <sstream>
#define BOY_AGE 22
#define YANZHI  80


Girl::Girl(){
	age = 0;
	name = "";
	yanzhi = 0;
}

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

bool Girl::Satisfied(const Boy& boy)const{
	//if (boy.yanzhi> YANZHI && age < BOY_AGE) {		待实现
	//	return false
	//}
	//else {
	//	return true;
	//}
	return false;
}

int Girl::getYanzhi()const{
	return yanzhi;
}
string Girl::description()const{
	stringstream ret;
	ret << "年龄" << "名字" << name << age << "颜值" << yanzhi << endl;
	return ret.str();
}