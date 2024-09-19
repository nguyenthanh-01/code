#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, r;
    cin >> a >> b >> r;

    int l = a;
    int cnt = 1;
    int m = a - b;

    while(l < r) {
        l += m;
        cnt++;
    }

    cout << cnt;

    return 0;
}
