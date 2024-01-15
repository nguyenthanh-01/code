#include <bits/stdc++.h>
using namespace std;

#define yes printf("YES\n")
#define no printf("NO\n")

#define ck(a, b, c) (a+b <= c || a+c <= b || b+c <= a) ? 1 : 0

typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    (a <= 0 || b <= 0 || c <= 0 || (ck(a, b, c))) ? no : yes;
    return 0;
}
