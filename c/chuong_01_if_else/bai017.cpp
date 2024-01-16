#include <bits/stdc++.h>
using namespace std;

#define lw printf("LOWER")
#define up printf("UPPER")
#define dg printf("DIGIT")
#define sc printf("SPECIAL")

typedef long long ll;

int main() {
    char c; cin >> c;
    if (c <= '9') (c < '0') ? sc : dg;
    else if (c <= 'Z') (c < 'A') ? sc : up;
    else if (c <= 'z') (c < 'a') ? sc : lw;
    else sc;
    return 0;
}
