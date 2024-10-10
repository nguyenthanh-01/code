#include <stdio.h>

#define ll long long

void fibo(int);

int main() {
    int n;
    scanf("%d", &n);

    fibo(n);

    return 0;
}

void fibo(int n) {
    if(n > 0) {
        printf("1 ");
    }

    if(n > 1) {
        printf("1 ");
    }

    ll f1 = 1;
    ll f2 = 1;

    for(int i = 2; i < n; i++) {
        ll r = f1 + f2;
        printf("%lld ", r);

        f1 = f2;
        f2 = r;
    }
}
