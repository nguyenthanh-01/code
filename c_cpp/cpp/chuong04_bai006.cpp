#include <iostream>

using namespace std;
using ll = long long;

int giai_thua(int, int);

int main() {
    int n, k;
    cin >> n >> k;

    int to_hop = giai_thua(n, n - k) / giai_thua(k, 1);

    cout << to_hop;

    return 0;
}

int giai_thua(int l, int r) {
    int res = 1;

    for(int i = l; i != r; i--) {
        res *= i;
    }

    return res;
}
