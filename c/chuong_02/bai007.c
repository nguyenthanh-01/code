#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	int res = 0;
	for (int i = 1; i * i <= a; i++) {
		if (a%i == 0) {
			res += 2;
		}
	}
	int flag = 0;
	int tmp = sqrt(a);
	if (tmp * tmp == a) {
		res -= 1;
		flag = 1;
	}
	printf("%d \n", res);
	for (int i = 1; i <= tmp; i++) {
		if (a%i == 0) {
			printf("%d ", i);
		}
	}
	for (int i = tmp - flag; i > 0; i--) {
		if (a%i == 0) {
			printf("%d ", a / i);
		}
	}
	printf("\n");
	return 0;
}
