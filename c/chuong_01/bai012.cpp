#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t >> n;
    if (t < 1 || t > 12 || n <= 0) {
        cout << "INVALID\n";
    }
    else {
        if (t == 2) {
            if (n%400 == 0 || (n%4 == 0 && n%100 != 0)) {
                cout << "29\n";
            }
            else cout << "28\n";
        }
        else if (t == 4 || t == 6 || t == 9 || t == 11) {
            cout << "30\n";
        }
        else cout << "31\n";
    }
    return 0;
}
