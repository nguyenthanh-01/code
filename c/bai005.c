#include <stdio.h>

int test_1(float);
int test_2(float);
int test_3(float);

int main() {
    float a;
    scanf("%f", &a);
    printf("%d \n", test_1(a));
    printf("%d \n", test_2(a));
    printf("%d \n", test_3(a));
    return 0;
}

int test_1(float a) {
    int b = a;
    return b;
}

int test_2(float a) {
    a += 0.5;
    int b = a;
    return b;
}

int test_3(float a) {
    int b = a;
    float c = a - b;
    if(c < 1e-6) {
        return b;
    }
    return b + 1;
}
