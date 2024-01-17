#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    char c; cin >> c;
    if (c == 'z' || c == 'Z') {
        cout << "a";
    }
    else if (c < 'a') {
        printf("%c", c + 33);
    }
    else printf("%c", c + 1);
    return 0;
}
