#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define yes printf("YES\n")
#define no printf("NO\n")

typedef long long ll;

int main() {
    int n; cin >> n;
    (n%2 == 0) ? yes : no;
    (n%3 == 0 && n%5 == 0) ? yes : no;
    (n%3 == 0 && n%7 != 0) ? yes : no;
    (n%3 == 0 || n%7 == 0) ? yes : no;
    (n > 30 && n < 50) ? yes : no;
    (n >= 30 && (n%2 == 0 || n%3 == 0 || n%5 == 0)) ? yes : no;
    int r = n % 10;
    (n >= 10 && n <= 99 && (r == 2 || r == 3 || r == 5 || r == 7)) ? yes : no;
    (n <= 100 && n%23 == 0) ? yes : no;
    (n < 10 || n > 20) ? yes : no;
    (r%3 == 0) ? yes : no;
    return 0;
}
