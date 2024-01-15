#include <bits/stdc++.h>
using namespace std;

#define yes printf("YES\n")
#define no printf("NO\n")

#define ck(n) (n%4 == 0 && n%100 != 0) ? 1 : 0

typedef long long ll;

int main() {
    int n; cin >> n;
    (n%400 == 0 || (ck(n))) ? yes : no;
    return 0;
}
