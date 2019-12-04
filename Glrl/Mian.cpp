#include <iostream>
#include <string>
#include <vector>
#include "Boy.h"
#include "Girl.h"

using namespace std;

void autoPair(const vector<Boy>& boys, const vector<Girl>& girls) {
	for (int i = 0; i < boys.size(); i++) {
		for (int j = 0; i < girls.size(); j++) {
			if (boys[i].satisfied(girls[j]) && girls[j].Satisfied(boys[i])) {
				cout << boys[i].description()<< "<==>" << girls[j].description();
			}

		}

	}
}

int main(){
	vector<Boy> boys;
	vector<Girl> girls;

	Boy::inputBoys(boys);
	Girl::inputGirls(girls);

	cout << "\n\n------- ×Ô¶¯Æ¥Åä ------\n";
	autoPair(boys, girls);

	system("pause");
	return 0;
}