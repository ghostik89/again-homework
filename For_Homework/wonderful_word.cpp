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

	unsigned short glass = 0, soglas = 0, chars = 0;
	auto fiter = enter.begin(), siter = enter.begin();
	auto gfiter = enter.begin(), gsiter = enter.begin();
	for (auto iter = enter.begin(); iter != enter.end(); iter++) {
		if (glas.find(*iter) != glas.end()) {
			++glass;
			if (fiter == iter - 1 && glass == 2) {
				chars++;
				glass = 0;
			}
			fiter = iter;
			glass = 0;
		}
		else{
			++soglas;
			if (gfiter == iter - 1 && soglas == 2) {
				chars++;
				soglas = 0;
			}
			gfiter = iter;
			soglas = 0;
		}
	}
	cout << chars << endl;
	system("pause");
	return 0;
}
