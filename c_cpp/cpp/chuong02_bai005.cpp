#include <iostream>
#include <cstdio>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    double sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }

    printf("Tong = %.5lf", sum);

    return 0;
}
