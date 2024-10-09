#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x = x1 - x2;
    int y = y1 - y2;

    float khoang_cach = sqrt(x * x + y * y);
    printf("Khoang cach = %.2f", khoang_cach);

    return 0;
}
