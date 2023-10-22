#include <stdio.h>

typedef long long ll;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int ac1 = a + b;
	int ac2 = a - b;
	ll ac3 = 1ll * a * b;
	printf("%d \n%d \n%lld \n", ac1, ac2, ac3);
	if (b) {
		double ac4 = 1.0 * a / b;
		printf("%.4lf \n", ac4);
	}
	else printf("INVALID \n");
    return 0;
}
