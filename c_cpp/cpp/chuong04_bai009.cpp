#include <iostream>

using namespace std;
using ll = long long;

void thap_luc_phan(int, string);

int main() {
    int n; cin >> n;
    
    string arr = "0123456789ABCDEF";

    thap_luc_phan(n, arr);

    return 0;
}

void thap_luc_phan(int n, string arr) {
    if(n == 0) {
        return;
    }

    int x = n % 16;
    thap_luc_phan(n / 16, arr);
    cout << arr[x];
}
