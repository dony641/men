#pragma once
#include <string>
#include <vector>
using namespace std;
class Boy;

class Girl
{
public:
	Girl(int age,string name ,int yanzhi);
	~Girl();
	int getAge()const;
	string getName()const;
	int getYanzhi()const;
	bool Satisfied(const Boy& boy)const;
	string description()const;

	//������Girl��Ϣ
	static void inputGirls(vector<Girl> &girls);
private:
	int age;
	string name;
	int yanzhi;//��ֵ

};

