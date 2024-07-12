#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sub[100] = "10110101101101";

    int m = strlen(sub);

    int *arr = (int*) calloc(m, sizeof(int));

    int i = 0;
    int j = 1;

    while(j < m) {
        if(sub[i] == sub[j]) {
            arr[j++] = ++i;
        }
        else {
            if(i != 0) {
                i = arr[i - 1];
            }
            else {
                arr[j++] = 0;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
