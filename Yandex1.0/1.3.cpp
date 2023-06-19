#include <iostream>
#include <string>
#include <regex>
using namespace std;

//Два телефонных номера совпадают, если у них равны коды и равны номера

int main() {
	vector<string> phone_numbers(4);
	cin >> phone_numbers[0] >> phone_numbers[1] >> phone_numbers[2] >> phone_numbers[3];

	for (size_t i = 0; i < phone_numbers.size(); i++)
		phone_numbers[i] = regex_replace(phone_numbers[i], regex("[^0-9]+"), ""); //remove all non-digit symbols

	//bring the numbers to an 11-digit form
	if (phone_numbers[0].size() < 11)
		phone_numbers[0] = "8495" + phone_numbers[0];

	for (size_t i = 1; i < phone_numbers.size(); i++)
	{
		if (phone_numbers[i].size() < 11)
		{
			phone_numbers[i] = "8495" + phone_numbers[i];
		}
		phone_numbers[i][0] = phone_numbers[0][0];
		cout << (phone_numbers[0] == phone_numbers[i] ? "YES\n" : "NO\n");
	}
}

