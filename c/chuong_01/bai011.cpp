#include <bits/stdc++.h>
using namespace std;

#define x1 a + b <= c
#define y1 a + c <= b
#define z1 b + c <= a
#define x2 a*a + b*b == c*c
#define y2 a*a + c*c == b*b
#define z2 b*b + c*c == a*a

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 || x1 || y1 || z1) {
        cout << "INVALID\n";
    }
    else {
        if (a == b && b == c) {
            cout << "1\n";
        }
        else if (a == b || a == c || b == c) {
            cout << "2\n";
        }
        else if (x2 || y2 || z2) {
            cout << "3\n";
        }
        else cout << "4\n";
    }
    return 0;
}
