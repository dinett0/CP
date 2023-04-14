#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

//1. Implement replace function
//2. Split the input into strings
//3. Implement order of replacement

void pour(string& sample, char liquid) {
	for (size_t i = 0; i < sample.size(); i++)
	{
		if (sample[i] == ' ')
		{
			sample[i] = liquid;
		}
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	vector<string> input;
	int height, width;
	cin >> height >> width;

	for (size_t i = 0; i <= height; i++)
	{
		string s;
		getline(cin, s);
		input.push_back(s);
	}
	
	int drinks, from = input.size() - 2;
	cin >> drinks;
	for (size_t i = 0; i < drinks; i++)
	{
		string name;
		int layers;
		char symbol;
		cin >> name >> layers >> symbol;
		//cout << symbol << " received\n";
		for (size_t b = from; b > from - layers; b--)
		{
			//cout << "replacing string " << b << '\n';
			pour(input[b], symbol);
		}
		from -= layers;
	}

	//cout << "ANSWER\n\n";

	for (size_t i = 1; i < input.size()-1; i++)
	{
		cout << input[i] << '\n';
	}
	cout << input[input.size() - 1];
}
