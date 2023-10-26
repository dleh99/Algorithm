#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
	array<int, 10> basket;
	basket.fill(0);
	int result;
	int A, B, C;
	
	cin >> A;
	cin >> B;
	cin >> C;

	result = A * B * C;
	string s = to_string(result);

	for (char c : s) {
		int key = c - '0';
		basket[key]++;
	}
	for (int i{}; i < basket.size(); ++i)
		cout << basket[i] << endl;
}