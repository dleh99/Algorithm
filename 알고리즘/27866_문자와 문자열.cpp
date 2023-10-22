#include <iostream>

using namespace std;

int main()
{
	string word = "";
	int num = 0;

	cin >> word;
	cin >> num;

	if (word.size() > 1000) return 0;
	if (num > word.size()) return 0;

	int n = 1;
	for (char c : word) {
		if (n == num) {
			cout << c << endl;
			break;
		}
		n++;
	}
}