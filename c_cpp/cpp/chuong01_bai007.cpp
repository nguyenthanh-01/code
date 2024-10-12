#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    int nho_hon = a / b * b;
    int lon_hon = (a + b - 1) / b * b;

    cout << nho_hon << "\n";
    cout << lon_hon << "\n";

    return 0;
}
