#include <iostream>
using namespace std;

int main() {
	int start, end;
	string mode;
	cin >> start >> end >> mode;

	if (mode == "fan")
		cout << start;
	else if (mode == "auto")
		cout << end;
	else if (mode == "heat")
		cout << (start < end ? end : start); //print max
	else
		cout << (start > end ? end : start); //print min
}
