#include <stdio.h>
#include <math.h>

const float eps = 1e-6;

int test_1(float, int []);
int test_2(int, int []);

int main() {
    int a;
    scanf("%d", &a);

    int sum[] = {0};
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
    return (a - b) < eps ? test_2(b, sum): b + 1;
}

int test_2(int b, int sum[]) {
    sum[0] += b;
    return b;
}
