#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n = 90;

    ll arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    int x; cin >> x;

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            cout << "yes";
            return 0;
        }
    }

    cout << "no";
    return 0;
}
