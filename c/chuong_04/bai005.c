#include <stdio.h>

typedef long long ll;

int gt (int);

int main() {
    int a;
    scanf("%d", &a);
    printf("%d \n", gt(a));
    return 0;
}

int gt (int a) {
    int res = 1;
    while (a) {
        res *= a;
        a--;
    }
    return res;
}
