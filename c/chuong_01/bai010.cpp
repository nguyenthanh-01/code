#include <bits/stdc++.h>
using namespace std;

#define x a + b
#define y a + c
#define z b + c

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && x > c && y > b && z > a) {
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}
