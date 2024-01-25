#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    ll tich = 1ll * a * b;
    cout << tong << endl;
    cout << hieu << endl;
    cout << tich << endl;
    if(b == 0) {
        cout << "INVALID\n";
    }
    else {
        double thuong = 1.0 * a / b;
        printf("%.4lf \n", thuong);
    }
    return 0;
}
