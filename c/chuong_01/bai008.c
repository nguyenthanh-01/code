#include <stdio.h>

typedef long long ll;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int ans1 = a + b;
	int ans2 = a - b;
	ll ans3 = 1ll * a * b;
	printf("%d \n%d \n%lld \n", ans1, ans2, ans3);
	if (b) {
		double ans4 = 1.0 * a / b;
		printf("%.4lf \n", ans4);
	}
	else printf("INVALID \n");
    return 0;
}
