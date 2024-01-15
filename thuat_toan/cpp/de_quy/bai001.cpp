#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void dq(int, int &);

int main() {
    int n; cin >> n;
    int x = 0;
    dq(n, x);
    cout << x << "\n";
    return 0;
}

void dq(int n, int &x) {
    if (n == 0) return;
    x += n;
    dq(n - 1, x);
}
