#include <stdio.h>

#define ck(a, b, c) ((a) * (a) == (b) * (b) + (c) * (c)) ? 1 : 0

typedef long long ll;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("1 \n");
        }
        else if (a == b || a == c || b == c) {
            printf("2 \n");
        }
        else if (ck(a, b, c) || ck(b, a, c) || ck(c, a, b)) {
            printf("3 \n");
        }
        else printf("4 \n");
    }
    else printf("INVALID \n");
    return 0;
}
