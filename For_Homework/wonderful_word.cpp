#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	set<char> glas;
	glas.insert('a');
	glas.insert('e');
	glas.insert('u');
	glas.insert('i');
	glas.insert('o');

	string enter;
	cin >> enter;

	unsigned short  chars = 0;

	for (int i = 0; i < enter.size() - 1; i++) {
		if (isalpha(enter[i])) {
			if ((glas.find(enter[i]) != glas.end())) && ((glas.find(enter[i + 1]) != glas.end()))
				chars++;
			else (glas.find(enter[i]) == glas.end() && glas.find(enter[i + 1]) == glas.end())
				chars++;
		}
	}
	cout << chars << endl;
	system("pause");
	return 0;
}
