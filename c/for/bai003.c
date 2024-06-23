#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; ; i++) {
        if(i == 5) {
            break;
        }
        printf("%d \n", i);
    }
    return 0;
}
