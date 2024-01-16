#include <bits/stdc++.h>
using namespace std;

#define yes printf("29")
#define no printf("28")

#define ck(n) (n%4 == 0 && n%100 != 0) ? 1 : 0

typedef long long ll;

int main() {
    int t, n;
    cin >> t >> n;
    if (t < 1 || t > 12 || n < 1) {
        printf("INVALID\n");
    }
    else {
        if (t == 2) {
            (n%400 == 0 || (ck(n))) ? yes : no;
        }
        else if (t == 4 || t == 6 || t == 9 || t == 11) {
            printf("30");
        }
        else printf("31");
    }
    return 0;
}
