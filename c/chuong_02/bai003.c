#include <stdio.h>

typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	int n1 = n - n%3;
	int n0 = 3;
	n /= 3;
	ll ans = 1ll * n * (n1 + n0) / 2;
	printf("%lld \n", ans);
	return 0;
}

/*
n(n[-1] + n[0]) / 2
*/
