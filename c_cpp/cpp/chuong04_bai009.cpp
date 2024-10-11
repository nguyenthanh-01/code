#include <iostream>

using namespace std;
using ll = long long;

void hexa(int, string);

int main() {
    int n; cin >> n;
    string arr = "0123456789ABCDEF";

    hexa(n, arr);

    return 0;
}

void hexa(int n, string arr) {
    if(n == 0) {
        return;
    }

    int x = n % 16;
    hexa(n / 16, arr);
    cout << arr[x];
}
