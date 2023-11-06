#include <iostream>
#include <string>
#include <array>

using namespace std;
constexpr int alphaNum = 26;

int main()
{
	array<int, alphaNum> basket;
	string sentense;
	int now = 0;

	for (int i{}; i < alphaNum; ++i)
		basket[i] = -1;

	cin >> sentense;

	for (char c : sentense) {
		if (basket[c - 'a'] == -1)
			basket[c - 'a'] = now;
		now++;
	}

	for (int i{}; i < basket.size(); ++i)
		cout << basket[i] << " ";
}