#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int x; cin >> x;
    
    ll A = 1ll * x * x * x + 1ll * x * x * 3 + x + 1;
    cout << "A = " << A;

    return 0;
}
