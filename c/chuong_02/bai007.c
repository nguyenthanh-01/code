#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	int b = 0;
	for (int i = 1; i * i <= a; i++) {
		if (a%i == 0) {
			b += 2;
		}
	}
	int c = sqrt(a);
	int ac = 0;
	if (c * c == a) {
		b--;
		ac++;
	}
	printf("%d \n", b);
	for (int i = 1; i <= c; i++) {
		if (a%i == 0) {
			printf("%d ", i);
		}
	}
	for (int i = c - ac; i > 0; i--) {
		if (a%i == 0) {
			printf("%d ", a / i);
		}
	}
	printf("\n");
	return 0;
}
