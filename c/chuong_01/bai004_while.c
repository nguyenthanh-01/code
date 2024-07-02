#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d ", &n);

    while(n--) {
        int x;
        scanf("%d ", &x);

        printf("%d ", x);
    }
    printf("\n");

    int x;
    while(scanf("%d ", &x)) {
        printf("%d ", x);
    }
    printf("\n");

    while(true) {
        break;
    }
    
    return 0;
}
