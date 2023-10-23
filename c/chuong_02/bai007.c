#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	int ac1 = 0;
	for (int i = 1; i * i <= a; i++) {
		if (a%i == 0) {
			ac1 += 2;
		}
	}
	int ac2 = sqrt(a);
	int ac3 = 0;
	if (ac2 * ac2 == a) {
		ac1--;
		ac3++;
	}
	printf("%d \n", ac1);
	for (int i = 1; i <= ac2; i++) {
		if (a%i == 0) {
			printf("%d ", i);
		}
	}
	for (int i = ac2 - ac3; i > 0; i--) {
		if (a%i == 0) {
			printf("%d ", a / i);
		}
	}
	printf("\n");
	return 0;
}
