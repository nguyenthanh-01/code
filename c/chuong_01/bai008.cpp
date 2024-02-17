#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    ll tich = 1ll * a * b;
    printf("%d \n %d \n %lld \n", tong, hieu, tich);
    if (b == 0) {
        cout << "INVALID\n";
    }
    else {
        double thuong = 1.0 * a / b;
        printf("%.4lf \n", thuong);
    }
    return 0;
}
