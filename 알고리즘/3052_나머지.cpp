#include <iostream>
#include <string>
#include <sstream>
#include <array>

using namespace std;

int main()
{
	string input;
	array<int, 42> basket{ 0 };
	int count = 0;
	int number = 0;

	while (count < 10) {
		cin >> number;
		if (number > 1000) continue;
		basket[number % 42]++;
		count++;
	}

	int num = 0;
	for (int i{}; i < 42; ++i) {
		if (basket[i] != 0) num++;
	}
	cout << num;
}