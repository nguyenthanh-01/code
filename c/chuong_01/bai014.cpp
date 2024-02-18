#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float tb = (a + b + c * 2 + d * 3) / 7;
    if (tb < 5) {
        cout << "YEU\n";
    }
    else if (tb < 6.5) {
        cout << "TRUNG BINH\n";
    }
    else if (tb < 8) {
        cout << "KHA\n";
    }
    else cout "GIOI\n";
    return 0;
}
