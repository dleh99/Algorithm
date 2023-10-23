#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	cin >> num;

	if (!((num >= 1) && (num <= 100))) return 0;

	for (int i = 1; i <= num; ++i) {
		for (int blank_num = 0; blank_num + i < num; ++blank_num) cout << " ";
		for (int star_num = 1; star_num <= i; ++star_num) cout << "*";
		cout << endl;
	}
}