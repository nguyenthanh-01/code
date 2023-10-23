#include <stdio.h>

typedef long long ll;

int main() {
	ll a;
	scanf("%lld", &a);
	int cnt = 0;
	int tmp = 0;
	while (a) {
		tmp = a%10;
		if (tmp == 2 || tmp == 3 || tmp == 5 || tmp == 7) cnt++;
		a /= 10;
	}
	printf("%d", cnt);
	return 0;
}
