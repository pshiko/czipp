# czipp

Implementation of python like zip function.
Header only.

Tested with clang 7.0.0.
https://wandbox.org/permlink/6arvv7GxIJFkfAve

## How to use

```c++
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <array>
#include <valarray>
#include "czipp.h"

using namespace std;
int main() {
    vector<double> A = {0.1, 0.2, 0.3, 0.4};
    map<string, int> B = {{"a", 1}, {"b", 2}, {"c", 3}, {"d", 4}};
    string C = "tanakakun";
    array<double, 4> D = {0.1, 0.2, 0.3, 0.4};
    double E[3] = {1.1, 2.2, 3.3};
    valarray<float> F = {-1, -2, -3};
    for (auto [a, b, c, d, e, f]: czipp::zip(A, B, C, D, E, F)) {
        cout << a << " ";
        cout << b.first << " ";
        cout << c << " ";
        cout << d << " ";
        cout << e << " ";
        cout << f << endl;
    }
}

//Result
//0.1 a t 0.1 1.1 -1
//0.2 b a 0.2 2.2 -2
//0.3 c n 0.3 3.3 -3
```

