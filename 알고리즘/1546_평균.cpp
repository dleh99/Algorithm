#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int input_num = 0;
	int score = 0;
	vector<float> v;
	float max_score = 0.f;
	float sum = 0.f;

	cin >> input_num;
	if (input_num > 1'000) return 0;

	for (int i{}; i < input_num; ++i) {
		cin >> score;
		if (score < 0 || score > 100) return 0;
		v.push_back((float)score);
	}

	max_score = *max_element(v.begin(), v.end());
	if (max_score == 0.f) return 0;

	for (int i{}; i < v.size(); ++i) {
		v[i] = (v[i] / max_score) * 100.f;
		sum += v[i];
	}

	cout << sum / v.size() << endl;
}