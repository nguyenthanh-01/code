#include <bits/stdc++.h>
using namespace std;

#define yes printf("YES\n")
#define no printf("NO\n")

int main() {
    int n; cin >> n;
    (n%2 == 0) ? yes : no;
    (n%3 == 0 && n%5 == 0) ? yes : no;
    (n%3 == 0 && n%7 != 0) ? yes : no;
    (n%3 == 0 || n%7 == 0) ? yes : no;
    (n > 30 && n < 50) ? yes : no;
    (n >= 30 && (n%2 == 0 || n%3 == 0 || n%5 == 0)) ? yes : no;
    int m = n%10;
    (n >= 10 && n <= 99 && (m == 2 || m == 3 || m == 5 || m == 7)) ? yes : no;
    (n <= 100 && n%23 == 0) ? yes : no;
    (n < 10 || n > 20) ? yes : no;
    (m%3 == 0) ? yes : no;
    return 0;
}
