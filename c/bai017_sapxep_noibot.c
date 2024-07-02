#include <stdio.h>

#define size(a) (int) sizeof(a) / sizeof(a[0])

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = size(a);

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] < a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
