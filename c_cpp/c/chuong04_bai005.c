#include <stdio.h>

#define ll long long

void fibo(int, int *);

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    fibo(n, &sum);

    printf("%d", sum);

    return 0;
}

void fibo(int n, int *sum) {
    if(n == 1) {
        return;
    }

    if(n == 2) {
        *sum += 1;
        return;
    }

    fibo(n - 1, sum);
    fibo(n - 2, sum);
}
