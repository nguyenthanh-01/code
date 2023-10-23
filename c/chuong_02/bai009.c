#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    ll a;
    scanf("%lld", &a);
    ll res = 1;
    for (ll i = 1; i * i <= a; i++) {
    	if (a%i == 0) {
    	    res *= i;
    	    res *= (a / i);
        }
    }
    ll tmp = sqrt(a);
    if (tmp * tmp == a) res /= tmp;
    printf("%lld \n", res);
    return 0;
}
