#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    int c = a / b * b;
    int d = (a + b - 1) / b * b;

    cout << "c = " << c << "\n";
    cout << "d = " << d << "\n";

    return 0;
}
