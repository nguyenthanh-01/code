#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int x = a / b * b;
    int y = (a + b - 1) / b * b;
    cout << x << "\n" << y << "\n";
    return 0;
}
