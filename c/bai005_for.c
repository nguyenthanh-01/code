#include <stdio.h>
#include <math.h>

#define range(i, a, b) for(int i = (a); i <= (b); i += 2)

typedef long long ll;

static inline ll isqrt(ll k) {ll r = sqrt(k) + 1; while(r * r > k) r--; return r;}

int test_1(int);
void test_2(int);

int main() {
    int n = (int) 1e2 + 1;

    for(int i = 1; i < n; i++) {
        if(test_1(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for(int i = 1; i < n; i++) {
        printf("%d: ", i);
        test_2(i);
    }

    return 0;
}

int test_1(int a) {
    if(a < 2) {
        return 0;
    }

    if(a == 2) {
        return 1;
    }

    if(a % 2 == 0) {
        return 0;
    }
    
    range(i, 3, isqrt(a)) {
        if(a % i == 0) {
            return 0;
        }
    }

    return 1;
}

void test_2(int a) {
    if(a == 1) {
        printf("1 \n");
        return;
    }

    while(a % 2 == 0) {
        printf("2 ");
        a /= 2;
    }

    int i = 3;
    while(i <= isqrt(a)) {
        while(a % i == 0) {
            printf("%d ", i);
            a /= i;
        }
        i += 2;
    }

    if(a != 1) {
        printf("%d ", a);
    }

    printf("\n");
}
