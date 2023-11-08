#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int loop_num = 0;
	int height = 0;
	int width = 0;
	int person_num = 0;
	int room_num = 0;

	int front_num = 1;
	int back_num = 1;

	vector<int> v;

	cin >> loop_num;

	for (int i{}; i < loop_num; ++i) {
		cin >> height;
		cin >> width;
		cin >> person_num;

		if (height < 1) return 0;
		if (width > 99) return 0;
		if (1 > person_num || person_num > height * width) return 0;

		while (person_num > height) {
			person_num -= height;
			back_num++;
		}
		front_num = person_num;

		v.push_back((front_num * 100) + back_num);

		back_num = 1;
	}

	for (int room : v)
		cout << room << endl;
}