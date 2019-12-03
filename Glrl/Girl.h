#pragma once
#include <string>
using namespace std;
class Boy;

class Girl
{
public:
	Girl();
	Girl(int age,string name ,int yanzhi);
	~Girl();
	int getAge()const;
	string getName()const;
	int getYanzhi()const;
	bool Satisfied(const Boy& boy)const;
	string description()const;
private:
	int age;
	string name;
	int yanzhi;//—’÷µ

};

