#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

void ts_nt(ll);

int main() {
    ll n; cin >> n;

    ts_nt(n);

    return 0;
}

void ts_nt(ll n) {
    if(n < 2) {
        return;
    }

    while(n%2 == 0) {
        cout << "2 ";
        n /= 2;
    }

    int _n = sqrt(n) + 1;

    for(int i = 3; i < _n; i += 2) {
        while(n%i == 0) {
            cout << i << " ";
            n /= i;
        }
        
        _n = sqrt(n) + 1;
    }

    if(n > 2) {
        cout << n;
    }
}
