#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	vector<string> v;
	string sentense;

	getline(cin, sentense);

	istringstream ist(sentense);
	string word;
	while (ist >> word)
		v.push_back(word);
	
	cout << v.size() << endl;
}