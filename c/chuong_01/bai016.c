#include <stdio.h>

typedef long long ll;

int main() {
	char a;
	scanf("%c", &a);
	if (a == 'z' || a == 'Z') {
		printf("a \n");
	}
	else if (a < 'a') {
		a += 32 + 1;
		printf("%c \n", a);
	}
	else printf("%c \n", ++a);
    return 0;
}
