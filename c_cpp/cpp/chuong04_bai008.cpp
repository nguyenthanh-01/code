#include <iostream>

using namespace std;
using ll = long long;

void nhi_phan(int);

int main() {
    int n; cin >> n;

    nhi_phan(n);

    return 0;
}

void nhi_phan(int n) {
    if(n == 0) {
        return;
    }

    int x = n % 2;
    nhi_phan(n / 2);
    cout << x;
}