#include <stdio.h>

#define xuat(a) printf("%c \n", (a))

typedef long long ll;

int main() {
	char a;
	scanf("%c", &a);
	if (a <= 'Z') (a < 'A') ? xuat(a) : xuat(a + 32);
	else if (a <= 'z') (a < 'a') ? xuat(a) : xuat(a - 32);
	else xuat(a);
    return 0;
}
