#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	string sentense;
	vector<int> v(26, 0);

	cin >> sentense;

	for (char alpha : sentense) {
		if (isalpha(alpha)) {
			alpha = tolower(alpha);
			int index = alpha - 'a';
			v[index]++;
		}
	}

	int max_count = *max_element(v.begin(), v.end());
	bool is_first = true;
	bool is_double = false;
	char max_alpha;

	for (int i{}; i < 26; ++i) {
		if (v[i] == max_count) {
			if (is_first) {
				max_alpha = static_cast<char>('A' + i);
				is_first = false;
			}
			else
			{
				is_double = true;
				break;
			}
		}
	}

	if (is_double) {
		cout << "?";
	}
	else {
		cout << max_alpha;
	}
}