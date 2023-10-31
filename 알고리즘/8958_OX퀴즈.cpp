#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int roop = 0;
	int count = 0;
	vector<int> basket;
	
	cin >> roop;

	while (count < roop) {
		string patern;
		int sum = 0;
		int now = 0;

		cin >> patern;
		for (char c : patern) {
			if (c == 'O') {
				now++;
				sum += now;
			}
			if (c == 'X')now = 0;
		}
		basket.push_back(sum);
		count++;
	}

	for (int i{}; i < basket.size(); ++i)
		cout << basket[i] << endl;
}