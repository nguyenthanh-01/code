#include <bits/stdc++.h>
using namespace std;

#define ck1(a, b, c) (a+b <= c || a+c <= b || b+c <= a) ? 1 : 0
#define ck2(a, b, c) (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) ? 1 : 0

typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 || (ck1(a, b, c))) {
        printf("INVALID\n");
    }
    else {
        if (a == b && b == c) {
            printf("1");
        }
        else if (a == b || a == c || b == c) {
            printf("2");
        }
        else if (ck2(a, b, c)) {
            printf("3");
        }
        else printf("4");
    }
    return 0;
}
