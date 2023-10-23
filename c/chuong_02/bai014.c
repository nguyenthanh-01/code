#include <stdio.h>

typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	ll ans = 1ll * n * n * (n + 1) * (n + 1) / 4;
	printf("%lld \n", ans);
	return 0;
}

/*
nn(n + 1)(n + 1) / 4
*/
