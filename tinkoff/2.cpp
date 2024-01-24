#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#define INF (1 << 30)

int main() {
  string input;
  int throwaway;
  cin >> throwaway;
  cin >> input;

  int min = INF, max = 0, curr = 0;
  for (int j = 0; j <= input.size(); j++) {
    char i = input[j];
    if (i == '#' || i == '\0') {
      min = min > curr ? curr : min;
      max = max < curr ? curr : max;
      curr = 0;
    } else
      curr++;
  }

  cout << min << ' ' << max;
}
