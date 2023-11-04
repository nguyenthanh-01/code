#include <stdio.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;

int cp (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    if (cp(a)) {
        yes;
    }
    else no;
    return 0;
}

int cp (ll a) {
    int tmp = sqrt(a);
    return (1ll * tmp * tmp == a) ? 1 : 0;
}
