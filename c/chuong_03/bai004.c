#include <stdio.h>
#include <math.h>

typedef long long ll;

int us_nt (int);

int main() {
    int a;
    scanf("%d", &a);
    while (a--) {
        int tmp;
        scanf("%d", &tmp);
        printf("%d \n", us_nt(tmp));
    }
    return 0;
}

int us_nt (int a) {
    int tmp = 0;
    for (int i = 2; i * i <= a; i++) {
        if (a%i == 0) {
            tmp = i;
            while (a%i == 0) {
                a /= i;
            }
        }
    }
    return (a > 1) ? a : tmp;
}

/*
error: for (i < a)
*/
