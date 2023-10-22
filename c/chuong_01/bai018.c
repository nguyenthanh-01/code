#include <stdio.h>

#define in(a) printf("%c \n", (a))

typedef long long ll;

int main() {
	char a;
	scanf("%c", &a);
	if (a <= 'Z') (a < 'A') ? in(a) : in(a + 32);
	else if (a <= 'z') (a < 'a') ? in(a) : in(a - 32);
	else in(a);
    return 0;
}
