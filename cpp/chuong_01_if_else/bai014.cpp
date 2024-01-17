#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float tb = (a + b + c * 2 + d * 3) / 7;
    if (tb >= 8) {
        cout << "GIOI";
    }
    else if (tb >= 6.5) {
        cout << "KHA";
    }
    else if (tb >= 5) {
        cout << "TRUNG BINH";
    }
    else cout << "YEU";
    return 0;
}
