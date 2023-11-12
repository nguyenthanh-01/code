#include <stdio.h>

#define n (int) 1e7
int snt[n];

void sang_nguyen_to();
int sum(int);
void xuat(int);

int main() {
    sang_nguyen_to();
    int a;
    scanf("%d", &a);
    xuat(a);
    return 0;
}

void sang_nguyen_to() {
    for (int i = 2; i < n; i++) {
        snt[i] = 1;
    }
    for (int i = 2; i * i < n; i++) {
        if (snt[i]) {
            for (int j = i * i; j < n; j += i) {
                snt[j] = 0;
            }
        }
    }
}

int sum(int a) {
    int tmp = a % 10;
    while (a) {
        if (a%10 > tmp) {
            return 0;
        }
        a /= 10;
    }
    return 1;
}

void xuat(int a) {
    printf("2 ");
    int cnt = 1;
    for (int i = 3; i <= a; i += 2) {
        if (snt[i] == 0 || sum(i) == 0) {
            continue;
        }
        printf("%d ", i);
        cnt++;
    }
    printf("\n");
    printf("%d \n", cnt);
}
