#include <stdio.h>

typedef long long ll;

int main() {
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	float ac = (a + b + c * 2 + d * 3) / 7;
	if (ac < 5) {
		printf("YEU \n");
	}
	else if (ac < 6.5) {
		printf("TRUNG BINH \n");
	}
	else if (ac < 8) {
		printf("KHA \n");
	}
	else printf("GIOI \n");
    return 0;
}
