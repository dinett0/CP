#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <iomanip>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int platforms, guards;
	cin >> platforms >> guards;
	
	vector<long long> offset, inputP, inputG;

	for (size_t i = 0; i < platforms; i++) {
		long long buff;
		cin >> buff;
		inputP.push_back(buff);
	}

	for (size_t i = 0; i < guards; i++) {
		long long buff;
		cin >> buff;
		inputG.push_back(buff);
	}

	/// //////////////////////////////////////////////////////////////////////////////////

	long long max{};
	for (int i = inputP.size() - 1; i >= 0; i--) {
		if (inputP[i] > max)
		{
			offset.push_back(inputP[i] - max);
			max = inputP[i];
		}
	}
	
	sort(inputG.begin(), inputG.end());
	sort(offset.begin(), offset.end());

	int p{}, g{}, ans{};
	while (p != offset.size() && g != inputG.size())
	{
		if (offset[p] >= inputG[g])
		{
			p++;
			g++;
			ans++;
		}
		else
		{
			p++;
		}
	}

	cout << '\n' << ans;
}
