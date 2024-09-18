#include <bits/stdc++.h>
using namespace std;

void test(int);

int main() {
    int t; cin >> t;
    int n;

    while(cin >> n) {
        test(n);
        cout << "\n";
    }

    return 0;
}

void test(int n) {
    if(n == 0) {
        return;
    }

    int x = n % 3;
    test(n / 3);
    cout << x;
}
