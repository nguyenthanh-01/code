#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d ", &a, &b);

    for(int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 9; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        if(i > 5 && i < 10) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 5; i < 15; i++) {
        if(i < 5 || i > 10) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
