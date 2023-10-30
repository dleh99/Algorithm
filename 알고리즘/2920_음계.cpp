#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	string insert;
	vector<int> in;

	getline(cin, insert);

	istringstream ist(insert);
	string data;

	while (ist >> data) {
		int static_data = stoi(data);
		in.push_back(static_data);
	}

	vector<int> as(in.size());
	vector<int> des(in.size());

	for (int i{}; i < in.size(); ++i) {
		as[i] = in[i];
		des[i] = in[i];
	}

	sort(as.begin(), as.end());
	sort(des.begin(), des.end(), [](int a, int b) {
		return a > b;
		});

	bool ascend = true;
	bool descend = true;

	for (int i{}; i < in.size(); ++i) {
		if (in[i] != as[i]) ascend = false;
		if (in[i] != des[i]) descend = false;
	}

	if (!ascend && !descend) {
		cout << "mixed";
	}
	else if (descend) {
		cout << "descending";
	}
	else
	{
		cout << "ascending";
	}
}