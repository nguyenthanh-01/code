#include <stdio.h>

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	ll ans = 1ll * a * a * a + 3ll * a * a + a + 1;
	printf("%lld \n", ans);
	return 0;
}
