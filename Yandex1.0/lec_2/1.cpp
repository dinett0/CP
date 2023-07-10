#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> input;
    std::string buff;

    std::getline(std::cin, buff);
    std::stringstream iss(buff);

    int num;
    while (iss >> num) {
        input.push_back(num);
    }

    for (size_t i = 0; i < input.size(); i++)
    {
        if (i < input.size() - 1 && input[i] >= input[i + 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
