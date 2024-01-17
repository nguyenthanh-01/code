#include <bits/stdc++.h>
using namespace std;

#define lw cout << "LOWER\n"
#define up cout << "UPPER\n"
#define dg cout << "DIGIT\n"
#define sc cout << "SPECIAL\n"

typedef long long ll;

int main() {
    char c; cin >> c;
    if (c <= '9') (c < '0') ? sc : dg;
    else if (c <= 'Z') (c < 'A') ? sc : up;
    else if (c <= 'z') (c < 'a') ? sc : lw;
    else sc;
    return 0;
}
