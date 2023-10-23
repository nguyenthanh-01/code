#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
	ll a;
	scanf("%lld", &a);
	ll res1 = 0;
	for (ll i = 1; i * i <= a; i++) {
		if (a%i == 0) {
			res1 += i;
			res1 += (a / i);
		}
	}
	ll res2 = sqrt(a);
	if (res2 * res2 == a) res1 -= res2;
	printf("%lld \n", res1);
	return 0;
}
