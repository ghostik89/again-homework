#include <iostream>
#include <string>

using namespace std;

//function for cleaning strings
void cleaner(string& str) {
	if (str[0] == '8')
		str.erase(str.begin());
	if ((str[0] == '+') && (str[1] == '7'))
		str.erase(str.begin(), str.begin() + 2);
	for (auto iter = str.begin(); iter != str.end(); iter++)
		if (!isdigit(*iter))
			str.erase(iter);
}

int main() {
	string true_number, foo_str,true_code, true_num;
	bool arr[3] = { false };
	cin >> true_number;
	cleaner(true_number);
	if (true_number.size() == 10) {
		copy(true_number.begin(), true_number.begin() + 3,true_num.begin());
		copy(true_number.begin()+3, true_number.end(), true_code.begin());
	}
	if (true_number.size() == 7) {
		true_code = "495";
		true_num = true_number;
	}
	for (int i = 1; i <= 3; i++) {
		cin >> foo_str;
		cleaner(foo_str);
		if (foo_str == true_number)
			arr[i - 1] = true;
	}
	for (int i = 0; i < 3; i++)
		if (arr[i]) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	system("pause");
	return 0;
}