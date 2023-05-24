#include <iostream>
#include <fstream>
using namespace std;

int dp[1100]{};

int solve(int n) {
	if (!dp[n]) {
		dp[n] = solve(n - 1) + n;
	}
	return dp[n];
}

int main() {
	dp[0] = 1;

	ifstream input("INPUT.TXT", ios::in);
	int n;
	input >> n;

	ofstream output("OUTPUT.TXT ", ios::out);
	output << solve(n);
}
