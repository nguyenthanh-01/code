#include <stdio.h>

int test_1(float);
int test_2(float);
int test_3(float);

int main() {
    float a;
    scanf("%f", &a);
    printf("%.3f \n", a);
    printf("%d \n", test_1(a));
    printf("%d \n", test_2(a));
    printf("%d \n", test_3(a));
    return 0;
}

int test_1(float a) {
    return (int) a;
}

int test_2(float a) {
    return (int) (a + 0.5);
}

int test_3(float a) {
    int b = a;
    return (a - b) < (1e-6) ? b: b + 1;
}
