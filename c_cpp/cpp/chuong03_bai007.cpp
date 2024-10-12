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
        cout << "1 ";
    }

    if(n > 1) {
        cout << "1 ";
    }

    ll f1 = 1;
    ll f2 = 1;

    for(int i = 2; i < n; i++) {
        ll fn = f1 + f2;
        cout << fn << " ";

        f1 = f2;
        f2 = fn;
    }
}
