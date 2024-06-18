#include <stdio.h>

#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) (a) < (b) ? (a) : (b)

int main() {
    printf("%d \n", max(1, 4));
    printf("%d \n", min(1, 4));
    return 0;
}
