#include <stdio.h>

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	a *= 2;
	double res = 0;
	for (int i = 2; i <= a; i += 2) {
		res += (1.0 / i);
	}
	printf("%.5lf \n", res);
	return 0;
}
