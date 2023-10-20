#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;

	int max = -1'000'000;
	int min = 1'000'000;

	for (int i{}; i < num; ++i) {
		int x;
		cin >> x;

		if (x < min) min = x;
		if (x > max) max = x;
	}
	cout << min << " " << max;
}