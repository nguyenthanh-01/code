#include <stdio.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < 1 || a > 12 || b < 1) printf("INVALID \n");
    else {
        if (a == 2) {
            if (b%400 == 0 || (b%4 == 0 && b%100)) {
                printf("29 \n");
            }
            else printf("28 \n");
        }
        else if (a == 4 || a == 6 || a == 9 || a == 11) {
            printf("30 \n");
        }
        else printf("31 \n");
    }
    return 0;
}
