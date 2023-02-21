#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    //Input/////////////////////////////////////////////////////
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	cin >> n;
	set<int> set;

	for (size_t i = 0; i < n; i++)
	{
		int buff;
		cin >> buff;
		set.insert(buff);
	}

	cout << set.size();
}
