#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = x1 - x2;
    int y = y1 - y2;
    double kc = sqrt(x * x + y * y);
    printf("%.2lf \n", kc);
    return 0;
}
