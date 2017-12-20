#include <iostream>
#include <string>
#include <iterator>


using namespace std;


int main()
{
	string enter;
	cin >> enter;
	int first_liter(0), last_liter(0), numbers(0), len(0);
	auto iter = enter.begin();
	len = enter.size();
	while (isalpha(*iter)) {
		first_liter++; iter++;
	}
	while (!isalpha(*iter)) {
		numbers++;
		if (++iter == enter.end())
			break;
	}
	last_liter = len - first_liter - numbers;
	if ((first_liter == 1) && (numbers == 3) && (last_liter == 2) && (len == 6))
		cout << "1";
	else if ((first_liter == 2) && (numbers == 3) && (last_liter == 0) && (len == 5))
		cout << "2";
	else if ((first_liter == 2) && (numbers == 4) && (last_liter == 0) && (len == 6))
		cout << "3";
	else if ((first_liter == 0) && (numbers == 4) && (last_liter == 2) && (len == 6))
		cout << "4";
	else cout << "0";
	return 0;
}