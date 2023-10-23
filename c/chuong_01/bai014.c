#include <stdio.h>

typedef long long ll;

int main() {
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	float res = (a + b + c * 2 + d * 3) / 7;
	if (res < 5) {
		printf("YEU \n");
	}
	else if (res < 6.5) {
		printf("TRUNG BINH \n");
	}
	else if (res < 8) {
		printf("KHA \n");
	}
	else printf("GIOI \n");
    return 0;
}
