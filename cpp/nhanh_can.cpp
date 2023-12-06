#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, c[101][101], x[101];
int visi[101];
int d = 0, ans = INT_MAX;

void nhap() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }
    memset(visi, 0, sizeof(visi));
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (visi[j] == 0) {
            visi[j] = 1;
            x[i] = j;
            d += c[x[i - 1]][x[i]];
            if (i == n) {
                ans = min(ans, d + c[x[n]][1]);
            } else {
                Try(i + 1);
            }
            visi[j] = 0;
            d -= c[x[i - 1]][x[i]];
        }
    }
}

int main() {
    nhap();
    x[1] = 1;
    visi[1] = 1;
    Try(2);
    cout << ans << endl;
    return 0;
}
