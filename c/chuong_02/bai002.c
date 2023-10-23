#include <stdio.h>

typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	ll ans = 1ll * n * (n + 1) * (2 * n + 1) / 6;
	printf("%lld \n", ans);
	return 0;
}

/*
n(n + 1)(2n + 1) / 6
*/
