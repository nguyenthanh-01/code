#include <stdio.h>

#define n (int) 1e5
int a[n];

void sang_nguyen_to();
void xuat();

int main() {
    sang_nguyen_to();
    xuat();
    return 0;
}

void sang_nguyen_to() {
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

void xuat() {
    printf("2 ");
    for (int i = 3; i < n; i += 2) {
        if (a[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

/*
error: main | n = 1e5 | a[n]
*/
