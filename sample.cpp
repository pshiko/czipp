#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "czipp.h"

using namespace std;
int main() {
    vector<double> A = {0.1, 0.2, 0.3};
    map<std::string, int> B = {{"a", 1}, {"b", 2}, {"c", 3}};
    std::string C = "tanakakun";
    for (auto [a, b, c]: czipp::zip(A, B, C)) {
        cout << a << " ";
        cout << b.first << " ";
        cout << c << endl;
    }
}