#include <iostream>
#include <vector>
using namespace std;
 
#define lli long long int
 
template<typename T>
T maximom(T x, T y) {
	return x > y ? x : y;
}
 
lli diagonal(lli x, lli y) {
	lli max = maximom(x, y);
	return max * max - max + 1;
}
template<typename T>
bool aboveDiagonal(T x, T y) {
	return x < y ? true : false;
}
 
int main() {
	vector<lli> v;
	int queries;
	cin >> queries;
	lli x, y;
	while (queries)
	{
		cin >> x >> y;
		v.push_back(x);
		v.push_back(y);
		queries--;
	}
 
	for (size_t i = 0; i < v.size(); i += 2)
	{
		lli x = v[i], y = v[i + 1];
		lli diag = diagonal(x, y);
		if (x == y) {
			cout << diag << '\n';
			continue;
		}
		if (aboveDiagonal(x, y))
		{
			if (y % 2 == 0)
			{
				cout << diag - (y - x) << '\n';
			}
			else
			{
				cout<< diag + (y - x) << '\n';
			}
		}
		else
		{
			if (x % 2 == 0)
			{
				cout << diag + (x - y) << '\n';
			}
			else
			{
				cout << diag - (x - y) << '\n';
			}
		}
	}
}
