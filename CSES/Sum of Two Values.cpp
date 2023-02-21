#include <iostream>
#include <algorithm>
using namespace std;
 
struct element {
	int original_index{};
	int value{};
};
 
element input[210000];
 
//int main()
//{
//	cout << sizeof(input) / sizeof(input[0]);
//
//}
 
int binary_search(int begin, int sample, int size) {
	int l = begin, r = size - 1;
	int mid = (l + r) / 2;
 
	while (l <= r) {
		int mid = l + (r - l) / 2;
 
		if (input[mid].value == sample)
			return input[mid].original_index;
 
		if (input[mid].value < sample)
			l = mid + 1;
 
		else
			r = mid - 1;
	}
 
	return -1;
}
 
int main()
{
	int n, x;
	cin >> n >> x;
 
	for (int i = 0; i < n; i++)
	{
		cin >> input[i].value;
		input[i].original_index = i;
	}
 
	//for (size_t i = 0; i < n; i++)
	//{
	//	cout << "{" << input[i].original_index << "|" << input[i].value << "}, ";
	//}
 
	cout << '\n';
 
	sort(input, input + n, [](const element& lhs, const element& rhs)
	{
		return lhs.value < rhs.value;
	});
 
	//for (size_t i = 0; i < n; i++)
	//{
	//	cout << "{" << input[i].original_index << "|" << input[i].value << "}, ";
	//}
 
	for (size_t i = 0; i < n; i++)
	{
		int suck = binary_search(i+1, x - input[i].value, n);
		if (suck != -1) {
			cout << suck + 1 << " " << input[i].original_index + 1;
			return 0;
		}
	}
	
	cout << "IMPOSSIBLE";
}
