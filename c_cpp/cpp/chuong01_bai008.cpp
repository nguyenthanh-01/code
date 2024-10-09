#include <iostream>
#include <cstdio>

using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    int tong = a + b;
    int hieu = a - b;
    ll tich = 1ll * a * b;

    cout << "tong = " << tong << "\n";
    cout << "hieu = " << hieu << "\n";
    cout << "tich = " << tich << "\n";

    if(b == 0) {
        cout << "invalid \n";
    }
    else {
        float thuong = 1.0 * a / b;
        printf("thuong = %.4f", thuong);
    }

    return 0;
}
