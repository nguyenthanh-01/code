#include <bits/stdc++.h>
using namespace std;

#define x (a + b > c)
#define y (a + c > b)
#define z (b + c > a)

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && x && y && z) {
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}
