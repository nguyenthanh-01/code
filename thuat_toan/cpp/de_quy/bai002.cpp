#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int dq(int, vi &);

int main() {
    int n; cin >> n;
    vi x(n, 0); // mảng nhớ
    x[1] = 1;
    dq(n - 1, x);
    for (int i: x) {
        cout << i << " ";
    }
    return 0;
}

int dq(int n, vi &x) {
    if (n == 1 || n == 0) return n; // kết thúc
    if (x[n] == 0) {
        x[n] = dq(n - 1, x) + dq(n - 2, x); // code + đệ quy
    }
    return x[n];
}
