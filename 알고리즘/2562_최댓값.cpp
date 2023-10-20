#include <iostream>

using namespace std;
constexpr int num = 9;

int main()
{
	int x = 0;
	int max = 0;
	int index = 0;
	int now = 1;

	for (int i{}; i < num; ++i) {
		cin >> x;
		if (max < x) {
			max = x;
			index = now;
		}
		now++;
	}
	cout << max << "\n" << index;
}