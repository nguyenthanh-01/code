#include <iostream>

using namespace std;
using ll = long long;

void fibo(int);

int main() {
    int n; cin >> n;

    fibo(n);

    return 0;
}

void fibo(int n) {
    if(n > 0) {
        printf("1 ");
    }

    if(n > 1) {
        printf("1 ");
    }

    ll f1 = 1;
    ll f2 = 1;

    for(int i = 2; i < n; i++) {
        ll r = f1 + f2;
        cout << r << " ";

        f1 = f2;
        f2 = r;
    }
}
