#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a < 5) {
        printf("1");
    }
    else if(a < 10) {
        printf("2");
    }
    if(a == 5) {
        printf("3");
    }
    else if(a == 10) {
        printf("4");
    }
    return 0;
}
