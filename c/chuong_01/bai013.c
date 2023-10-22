#include <stdio.h>

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	int b = a / 365;
	a %= 365;
	int c = a / 7;
	a %= 7;
	printf("%d %d %d \n", b, c, a);
    return 0;
}
