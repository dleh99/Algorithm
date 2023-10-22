#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = 0;
	string number = "";
	int sum = 0;

	cin >> num;
	cin >> number;

	for (char n : number) {
		sum += n - '0';
	}
	cout << sum << endl;
}