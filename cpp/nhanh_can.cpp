#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, c[101][101], x[101];
int visi[101];
int d = 0, ans = INT_MAX, dem = 0, cmin = INT_MAX;

void nhap() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
            if (c[i][j] != 0) {
                cmin = min(cmin, c[i][j]);
            }
        }
    }
    memset(visi, 0, sizeof(visi));
}

void Try(int i) {
    dem++;
    for (int j = 1; j <= n; j++) {
        if (visi[j] == 0) {
            visi[j] = 1;
            x[i] = j;
            d += c[x[i - 1]][x[i]];
            if (i == n) {
                ans = min(ans, d + c[x[n]][1]);
            } else if (d + (n - i + 1) * cmin < ans) {
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
    cout << dem << endl;
    return 0;
}
/*
11
0 7 83 7 98 95 96 43 19 5 77
7 0 90 91 91 93 85 47 88 29 24
83 90 0 95 44 12 58 32 78 20 51
7 91 95 0 9 51 45 52 47 49 12
98 91 44 9 0 48 28 18 57 17 67
95 93 12 51 48 0 54 82 40 33 78
96 85 58 45 28 54 0 55 31 22 100
43 47 32 52 18 82 55 0 66 97 76
19 88 78 47 57 40 31 66 0 58 68
5 29 20 49 17 33 22 97 58 0 23
77 24 51 12 67 78 100 76 68 23 0
*/
