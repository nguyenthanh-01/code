#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    printf("%lld",1ll *  n/2 * m + n%2 * m/2);
    return 0;
}
