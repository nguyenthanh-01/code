#include <iostream>

using namespace std;
using ll = long long;

void giai_thua(int, int &);

int main() {
    int n; cin >> n;
    int res = 1;

    giai_thua(n, res);

    cout << res;

    return 0;
}

void giai_thua(int n, int &res) {
    if(n == 1) {
        return;
    }

    res *= n;
    giai_thua(n - 1, res);
}
