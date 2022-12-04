#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;

int main() {
	std::cin.tie(0); std::cout.tie(0); 
	std::ios_base::sync_with_stdio(false);

	unsigned int queris;
	cin >> queris;
	std::vector<long long> ans;

	for (int i = 0; i < queris; i++)
	{
		std::vector<unsigned int> params, price;
		unsigned int friends, gifts;
		cin >> friends >> gifts;
		for (size_t j = 0; j < friends; j++)
		{
			unsigned int buff;
			cin >> buff;
			params.push_back(buff);
		}
		for (size_t j = 0; j < gifts; j++)
		{
			unsigned int buff;
			cin >> buff;
			price.push_back(buff);
		}

		std::sort(params.begin(), params.end());

		int z = params.size() - 1,
			j = 0;
		long long sum = 0;

		while (0 <= z)
		{
			if (price[params[z] - 1] >= price[j] && j < price.size())
			{
				sum += price[j];
				j++;
			}
			else
			{
				sum += price[params[z] - 1];
			}
			z--;
		}
		ans.push_back(sum);
	}
	for (auto& i : ans)
	{
		cout << i << '\n';
	}
}
