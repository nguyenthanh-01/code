#include <bits/stdc++.h>
using namespace std;

#define yes printf("YES\n")
#define no printf("NO\n")

#define ck1(n) (n%2 == 0 || n%3 == 0 || n%5 == 0) ? 0 : 1
#define ck2(r) (r == 2 || r == 3 || r == 5 || r == 7) ? 0 : 1

typedef long long ll;

int main() {
    int n; cin >> n;
    (n%2 == 0) ? yes : no;
    (n%15 == 0) ? yes : no;
    (n%3 == 0 && n%7 != 0) ? yes : no;
    (n%3 == 0 || n%7 == 0) ? yes : no;
    (n <= 30 || n >= 50) ? no : yes;
    (n < 30 || (ck1(n))) ? no : yes;
    int r = n % 10;
    (n < 10 || n > 99 || (ck2(r))) ? no : yes;
    (n > 100 || n%23 != 0) ? no : yes;
    (n < 10 || n > 20) ? yes : no;
    (r%3 == 0) ? yes : no;
    return 0;
}
