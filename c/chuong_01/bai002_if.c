#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d ", &a, &b);

    if(a < b) {
        printf("1");
    }

    if(a < b) {
        printf("1");
    }
    else if(a == b) {
        printf("2");
    }
    else {
        printf("3");
    }

    if(a > 5 && b < 10) {
        continue;
    }

    if(a < 5 || b > 10) {
        break;
    }
    
    return 0;
}
