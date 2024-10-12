#include <iostream>
#include <cstdio>

using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    int tong = a + b;
    int hieu = a - b;
    ll tich = (ll) a * b;

    cout << tong << "\n";
    cout << hieu << "\n";
    cout << tich << "\n";

    if(b == 0) {
        cout << "invalid \n";
    }
    else {
        float thuong = 1.0 * a / b;
        printf("%.4f", thuong);
    }

    return 0;
}
