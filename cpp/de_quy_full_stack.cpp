#include <bits/stdc++.h>
using namespace std;

int x = 0;

void dq(int);

int main() {
    dq(5);
    cout << x;
    return 0;
}

void dq(int a) {
    if (a == 0) return;
    x += a;
    dq(a - 1);
    x -= a;
}
