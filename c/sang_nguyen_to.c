#include <stdio.h>

#define n (int) 1e7
int snt[n];

void sang_nguyen_to();
void xuat();

int main() {
    sang_nguyen_to();
    xuat();
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

void xuat() {
    printf("2 ");
    for (int i = 3; i < n; i += 2) {
        if (snt[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

/*
error: main | n = 1e5 | a[n]
*/
