#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || j == 0 || j == a - 1 || i == a - 1) {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || j == 0 || j == a - 1 || i == a - 1) {
                printf("*");
            }
            else printf("#");
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || j == 0 || j == a - 1 || i == a - 1) {
                printf("%d ", i + 1);
            }
            else printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}
