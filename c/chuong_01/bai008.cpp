#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << 1ll * a * b << "\n";
    if (b == 0) {
        cout << "INVALID\n";
    }
    else printf("%.4lf \n", 1.0 * a / b);
    return 0;
}
