#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <array>
#include <math.h>

using namespace std;

int main()
{
	vector<string> v;
	string input = "";
	array<int, 3> a;
	int max;
	int io;

	while (true) {
		getline(cin, input);
		istringstream ist(input);
		ist >> a[0] >> a[1] >> a[2];

		if (a[0] == 0 && a[1] == 0 && a[2] == 0) break;

		max = a[0]; io = 0;
		if (max < a[1]) {
			max = a[1];
			io = 1;
		}
		if (max < a[2]) {
			max = a[2];
			io = 2;
		}

		if (pow(a[io], 2) == pow(a[(io + 1) % 3], 2) + pow(a[(io + 2) % 3], 2)) v.push_back("right");
		else v.push_back("wrong");
	}
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
}