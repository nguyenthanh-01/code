#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("S = %d", sum);

    return 0;
}
