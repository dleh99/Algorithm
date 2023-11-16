#include <iostream>

using namespace std;

int main()
{
	int input_num = 0;
	cin >> input_num;

	if (input_num < 1 || input_num > 1'000'000'000) return 0;

	if (input_num == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	int init = 1;

	for (int i = 1; ; ++i) {
		if (init < input_num && input_num <= (6 * i) + init) {
			cout << i + 1 << endl;
			break;
		}
		init = (6 * i) + init;
	}
}