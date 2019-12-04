#pragma once
#include <string>
#include <vector>
#include "Single.h"
using namespace std;
class Girl;

class Boy:public Single
{
public:
	Boy();
	Boy(int age, string name, int salary);
	~Boy();

	int getSalary()const;
	bool satisfied(const Girl& firl)const;
	string description()const;
	//������Boy��Ϣ
	static void inputBoys(vector<Boy>& boys);
private:

	int salary;//н��
	
};

