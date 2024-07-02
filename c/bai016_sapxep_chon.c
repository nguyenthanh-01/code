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
        int tmp = a[i];
        a[i] = a[pos];
        a[pos] = tmp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
