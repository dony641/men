#pragma once
#include <string>
using namespace std;
class Single
{
public:
	Single();
	Single(int age,string name);
	~Single();
	
	int getAge()const;
	string getName()const;
	


	int age;
	string name;
};

