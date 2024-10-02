#include <iostream>
#include <stdio.h>
using namespace std;
using ll = long long;

int main() {
    int C; cin >> C;

    float F = ((float) C * 9 / 5) + 32;
    printf("F = %.2f", F);

    return 0;
}
