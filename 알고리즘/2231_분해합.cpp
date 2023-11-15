#include <iostream>

using namespace std;

int Find(int input)
{
	int sum = 0;
	int now = 0;
	int max_num = 0;

	now = input;
	while (now > 0) {
		now /= 10;
		max_num++;
	}

	for (int i = input - (max_num * 9); i < input; ++i) {
		sum = 0;
		now = i;
		while (now > 0) {
			sum += now % 10;
			now /= 10;
		}
		if (i + sum == input)
			return i;
	}

	return -1;
}

int main()
{
	int input_num = 0;

	cin >> input_num;
	if (input_num < 1 || input_num > 1'000'000) return 0;
	int res = Find(input_num);

	if (res != -1)
		cout << res << endl;
	else
		cout << "0" << endl;
}