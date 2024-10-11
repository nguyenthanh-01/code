#include <iostream>

using namespace std;
using ll = long long;

void nhanh_can(int, int, int &);

int main() {
    int n; cin >> n;
    int cnt = 0;
    int can = 1000000000;

    nhanh_can(n, cnt, can);

    cout << can;

    return 0;
}

void nhanh_can(int n, int cnt, int &can) {
    if(cnt == can) {
        return;
    }

    if(n == 1) {
        can = cnt;
        return;
    }

    if(n%2 == 0) {
        nhanh_can(n / 2, cnt + 1, can);
    }

    if(n%3 == 0) {
        nhanh_can(n / 3, cnt + 1, can);
    }

    nhanh_can(n - 1, cnt + 1, can);
}
