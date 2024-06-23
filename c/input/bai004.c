#include <stdio.h>

#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) (a) < (b) ? (a) : (b)

typedef long long ll;

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    printf("max: %lld \n", max(a, b));
    printf("min: %lld \n", min(a, b));
    return 0;
}
