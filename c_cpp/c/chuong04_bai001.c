#include <stdio.h>

#define ll long long

void tong(int, int *);

int main() {
    int n;
    scanf("%d", &n);

    int s = 0;

    tong(n, &s);

    printf("%d", s);

    return 0;
}

void tong(int n, int *s) {
    if(n == 0) {
        return;
    }

    *s += n;
    tong(n - 1, s);
}
