#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;

void test(int, vi &);

int main() {
    int a, b;
    cin >> a >> b;

    vi arr_a, arr_b;

    test(a, arr_a);
    test(b, arr_b);

    int n = sz(arr_a);
    int m = sz(arr_b);

    if(n > m) {
        for(int i = 0; i < n - m; i++) {
            arr_b.pb(0);
        }
    }
    else {
        for(int i = 0; i < m - n; i++) {
            arr_a.pb(0);
        }
    }
    
    vi arr_c;

    for(int i = 0; i < sz(arr_a); i++) {
        int x = (arr_b[i] + 3 - arr_a[i]) % 3;
        arr_c.pb(x);
    }

    int c = 0;

    for(int i = 0; i < sz(arr_c); i++) {
        int x = arr_c[i] * pow(3, i);
        c += x;
    }

    cout << c;

    return 0;
}

void test(int n, vi &arr) {
    if(n == 0) {
        return;
    }

    int x = n % 3;
    arr.pb(x);
    test(n / 3, arr);
}
