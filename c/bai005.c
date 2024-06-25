#include <stdio.h>
#include <math.h>

int test_1(float, int []);

int main() {
    int a;
    scanf("%d", &a);

    int sum[1] = {0};
    int n = test_1(sqrt(a), sum);

    for(int i = 1; i < n; i++) {
        if(a % i == 0) {
            sum[0] += (i + a / i);
        }
    }

    printf("%d \n", sum[0]);
    return 0;
}

int test_1(float a, int sum[]) {
    int b = a;
    if(a > b) {
        return b + 1;
    }
    sum[0] += b;
    return b;
}
