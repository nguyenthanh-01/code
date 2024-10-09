#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    int l = ceil(sqrt(a));
    int r = sqrt(b) + 1;

    for(int i = l; i < r; i++) {
        printf("%lld ", 1ll * i * i);
    }
    
    return 0;
}
