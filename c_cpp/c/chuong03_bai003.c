#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);

    int m = sqrt(n);

    if(1ll * m * m == n) {
        printf("yes");
    }
    else {
        printf("no");
    }

    return 0;
}
