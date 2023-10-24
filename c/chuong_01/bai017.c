#include <stdio.h>

#define sp printf("SPECIAL \n")
#define up printf("UPPER \n")
#define lw printf("LOWER \n")
#define dg printf("DIGIT \n")

typedef long long ll;

int main() {
    char a;
    scanf("%c", &a);
    if (a <= '9') (a < '0') ? sp : dg;
    else if (a <= 'Z') (a < 'A') ? sp : up;
    else if (a <= 'z') (a < 'a') ? sp : lw;
    else sp;
    return 0;
}
