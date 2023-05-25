//Failed solution

//1. Recording dp[n]: NUMBER OF WAYS TO REACH Nth STAIR
//2. Formula: dp[n]=dp[n-1]+dp[n-2]+...+dp[n-k] (we can get to the Nth stair from previous n-1, ..., n-k stairs and add their dp's)
//3. Base: dp[0] = 1;
//4. Order: -
//5. Answer: dp[n]

//errors i have encountered:
//		*overflow, need a wider type - dont forget to check the return type


#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

#define INF 0
vector<unsigned long long> dp(330, INF);
int n, k;

unsigned long long solve(int stairs) {
	if (dp[stairs] == INF) {
		int up_to = stairs > k ? k : stairs;
		for (size_t i = 1; i <= up_to; i++)
			dp[stairs] += solve(stairs - i);
	}
	return dp[stairs];
}

int main() {
	dp[0] = 1;
	ifstream input("INPUT.TXT", ios::in);
	input >> k >> n;
	//cout << k << ' ' << n << '\n';
	//cin >> k >> n;
	//cout << solve(n);
	ofstream output("OUTPUT.TXT ", ios::out);
	output << solve(n);
}
