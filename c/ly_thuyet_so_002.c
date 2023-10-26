#include <stdio.h>

typedef long long ll;

void ts_nt (int);
int ucln (int, int);
int bcnn (int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("1. thua so nguyen to: "); ts_nt(a);
    printf("2. uoc chung lon nhat: %d \n", ucln(a, b));
    printf("2. boi chung nho nhat: %d \n", bcnn(a, b));
    printf("3. so thuan nghich");
    return 0;
}

void ts_nt(int a) {
    int i = 2;
    while (i * i <= a) {
        while (a%i == 0) {
            printf("%d ", i);
            a /= i;
        }
        i++;
    }
    if (a > 1) printf("%d \n", a);
}

int ucln (int a, int b) {
    while (b) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int bcnn (int a, int b) {
    return a / ucln(a, b) * b;
}
