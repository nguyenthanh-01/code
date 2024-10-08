#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    int c = ceil(sqrt(a));
    int d = sqrt(b) + 1;

    for(int i = c; i < d; i++) {
        printf("%lld ", 1ll * i * i);
    }
    
    return 0;
}
