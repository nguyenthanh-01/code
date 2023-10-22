#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
	ll a;
	scanf("%lld", &a);
	ll ac1 = 0;
	for (ll i = 1; i * i <= a; i++) {
		if (a%i == 0) {
			ac1 += i;
			ac1 += (a / i);
		}
	}
	ll ac2 = sqrt(a);
	if (ac2 * ac2 == a) ac1 -= ac2;
	printf("%lld \n", ac1);
	return 0;
}
