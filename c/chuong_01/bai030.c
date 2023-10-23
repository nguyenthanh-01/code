#include <stdio.h>

typedef long long ll;

int main() {
	ll n;
	scanf("%lld", &n);
	ll ans = n * (n - 1) / 2;
	printf("%lld \n", ans);
    return 0;
}

/*
C(n, k) = n > (n - k) / k!
C(n, 2) = n * (n - 1) / 2
*/
