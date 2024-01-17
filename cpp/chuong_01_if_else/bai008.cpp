#include <bits/stdc++.h>
using namespace std;

#define inv printf("INVALID\n")
#define thuong printf("%.4lf \n", 1.0 * a / b)

typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    ll tich = 1ll * a * b;
    int hieu = a - b;
    cout << tong << "\n" << hieu << "\n" << tich << "\n";
    (b == 0) ? inv : thuong;
    return 0;
}
