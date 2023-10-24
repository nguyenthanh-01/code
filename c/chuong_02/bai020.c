#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    if (a == 1) {
        printf("-1 \n");
        return 0;
    }
    printf("%d \n", a / 2);
    int tmp = a / 2 - a % 2;
    for (int i = 0; i < tmp; i++) {
        printf("2 ");
    }
    if (a%2) printf("3 ");
    printf("\n");
    return 0;
}
