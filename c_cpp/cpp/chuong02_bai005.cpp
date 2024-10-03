#include <iostream>
#include <stdio.h>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    double sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += (double) 1 / (2 * i);
    }

    printf("Tong = %.5lf", sum);

    return 0;
}
