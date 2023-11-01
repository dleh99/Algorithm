#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	string option;
	getline(cin, option);

	istringstream ist(option);
	string num;
	string num_x;
	int number = 0;
	int x = 0;

	ist >> num >> num_x;

	number = stoi(num);
	x = stoi(num_x);

	if (number < 1 || x > 10'000) return 0;

	int number_2 = 0;
	vector<int> v;
	for (int i{}; i < number; ++i) {
		cin >> number_2;
		if (number_2 < x)
			v.push_back(number_2);
	}

	for (int i{}; i < v.size(); ++i)
		cout << v[i] << " ";
}