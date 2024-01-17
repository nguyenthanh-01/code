#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    char c; cin >> c;
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    else if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    cout << c;
    return 0;
}
