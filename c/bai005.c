#include <stdio.h>
#include <math.h>

static inline int isqrt(int r) {return (int) sqrt(r) + 1;}

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
    
    int n = isqrt(a);
    for(int i = 3; i < n; i += 2) {
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
    while(i < isqrt(a)) {
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
