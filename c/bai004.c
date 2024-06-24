#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a < 5) {
        printf("1 \n");
    }
    else if(a < 10) {
        printf("2 \n");
    }
    if(a == 5) {
        printf("3 \n");
    }
    else if(a == 10) {
        printf("4 \n");
    }
    return 0;
}
