#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	vector<string> v;

	for (int i{}; i < num; ++i) {
		int number = 0;
		cin >> number;

		string text = "";
		cin >> text;

		string result = "";
		for (char ch : text) {
			for (int j{}; j < number; ++j) {
				result += ch;
			}
		}
		v.push_back(result);
	}

	for (string st : v)
		cout << st << endl;
}