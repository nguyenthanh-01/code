#include <iostream>
#include <cstdio>

using namespace std;
using ll = long long;

int main() {
    int C; cin >> C;

    float F = (1.0 * C * 9 / 5) + 32;
    printf("F = %.2f", F);

    return 0;
}
