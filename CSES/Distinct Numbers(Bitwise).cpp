//sizeof returns result in BYTES
#include <iostream>
#include <algorithm>
#include <bitset>
 #include <fstream>
using namespace std;

int main()
{
 //   //Input/////////////////////////////////////////////////////
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	//ifstream input("test_input.txt");
	
	int n;
	//input >> n;
	cin >> n;
	
	
	char *x = new char[125000500]{};
	
	int counter{};
	int buff;
	
	for (size_t i = 0; i < n; i++)
	{
		cin >> buff;
		bool condition = x[buff / (sizeof(x[0]) * 8)] & (1 << buff % (sizeof(x[0]) * 8));
		if (!condition)
		{
			x[buff / (sizeof(x[0]) * 8)] |= (1 << buff % (sizeof(x[0]) * 8));
			counter++;
		}
	}
	
	//while (input>>buff)
	//{
	//	bool condition = x[buff / (sizeof(x[0]) * 8)] & (1 << buff % sizeof(x[0]));
	//	if (!condition)
	//	{
	//		x[buff / (sizeof(x[0]) * 8)] |= (1 << buff % sizeof(x[0]));
	//		counter++;
	//	}
	//}

	cout << counter;

	//char* x = new char[125000500]{};
	//cout << (int)x[265840313 / (sizeof(x[0])*8)];
}
