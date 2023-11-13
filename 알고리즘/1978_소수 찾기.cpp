#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num)
{
	if (num <= 1 || num > 1000) return false;
	for (int i = 2; i * i <= num; ++i) {
		if (num % i == 0) return false;
	}
	return true;
}

int main()
{
	int input_num = 0;
	int num = 0;
	int count = 0;

	cin >> input_num;
	if (input_num <= 0 || input_num > 100) return 0;

	for (int i{}; i < input_num; ++i) {
		cin >> num;
		if (isPrime(num))
			count++;
	}
	cout << count << endl;
}