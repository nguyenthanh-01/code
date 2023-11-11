#include <stdio.h>

#define n 1e5

void sang_nguyen_to(int []);
void xuat(int []);

int main() {
    int a[n] = {0};
    sang_nguyen_to(a);
    xuat(a);
    return 0;
}

void sang_nguyen_to(int a[]) {
    for (int i = 2; i < n; i++) {
        a[i] = 1;
    }
    for (int i = 2; i * i < n; i++) {
        if (a[i]) {
            for (int j = i * i; j < n; j += i) {
                a[j] = 0;
            }
        }
    }
}

void xuat(int a[]) {
    printf("2 ");
    for (int i = 3; i < n; i += 2) {
        if (a[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
