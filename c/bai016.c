#include <stdio.h>

#define size(a) (int) sizeof(a) / sizeof(a[0])

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = size(a);

    for(int i = 0; i < n - 1; i++) {
        int pos = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] > a[pos]) {
                pos = j;
            }
        }
        int tmp = a[pos];
        a[pos] = a[i];
        a[i] = tmp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d", a[i]);
    }

    return 0;
}
