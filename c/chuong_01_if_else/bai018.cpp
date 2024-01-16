#include <bits/stdc++.h>
using namespace std;

#define lw(c) printf("%c", c - 32)
#define up(c) printf("%c", c + 32)
#define sc(c) printf("%c", c)

typedef long long ll;

int main() {
    char c; cin >> c;
    if (c <= 'Z') (c < 'A') ? sc(c) : up(c);
    else if (c <= 'z') (c < 'a') ? sc(c) : lw(c);
    else sc(c);
    return 0;
}
