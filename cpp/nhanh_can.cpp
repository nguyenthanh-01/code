#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;
int cnt = -1;

void dq(int, int);

int main() {
    int a;
    cin >> a;
    dq(a, 0);
    cout << ans << "\n";
    cout << cnt << "\n";
    return 0;
}

void dq(int a, int x) {
	cnt++;
    if(ans < x) return;
    if(a == 1) {
        ans = x;
        // if(ans > x) swap(ans, x);
        return;
    }
    if(a%3 == 0) dq(a / 3, x + 1);
    if(a%2 == 0) dq(a / 2, x + 1);
    dq(a - 1, x + 1);
}

/*
38
5
86
*/
