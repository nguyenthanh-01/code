#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
	ll a;
	scanf("%lld", &a);
	ll b = 0;
	for (ll i = 1; i * i <= a; i++) {
		if (a%i == 0) {
			b += i;
			b += (a / i);
		}
	}
	ll c = sqrt(a);
	if (c * c == a) b -= c;
	printf("%lld \n", b);
	return 0;
}
