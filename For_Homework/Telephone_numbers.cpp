#include <iostream>
#include <string>

using namespace std;

//clean number
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
	string true_number, foo_str, foo_code,foo_num;
	string true_num, true_code;
	//arr for check
	bool arr[3] = { false };
	cin >> true_number;
	cleaner(true_number);
	//copy for compare
	if (true_number.size() == 10) {
		true_code.append(true_number, 0,3);
		true_num.append(true_number, 3,7);
	}
	if (true_number.size() == 7) {
		true_code = "495";
		true_num = true_number;
	}
	for (int i = 1; i <= 3; i++) {
		cin >> foo_str;
		cleaner(foo_str);
		//copy to num and code
		if (foo_str.size() == 10) {
			foo_code.append(foo_str, 0,3);
			foo_num.append(foo_str, 3,7);
		}
		if (foo_str.size() == 7) {
			foo_code = "495";
			foo_num = foo_str;
		}
		//chek number
		if (true_code == foo_code && true_num == foo_num) {
			arr[i - 1] = true;
			foo_str.clear();
			foo_num.clear();
			foo_code.clear();
		}


	}
	//compelete
	for (int i = 0; i < 3; i++)
		if (arr[i]) cout << "YES" << "\n";
		else cout << "NO" << "\n";
		system("pause");
	return 0;
}