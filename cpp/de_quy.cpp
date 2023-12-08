#include <bits/stdc++.h>
using namespace std;

int dq(int);

int main() {
    cout << dq(5);
    return 0;
}

int dq(int a) {
    if (a == 0) return 0;
    return a + dq(a - 1);
}
