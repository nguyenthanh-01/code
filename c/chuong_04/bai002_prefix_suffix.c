#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pre_suf(char [], int []);

int main() {
    char sub[100] = "10110101101101";

    int m = strlen(sub);

    int *arr = (int*) calloc(m, sizeof(int));

    pre_suf(sub, arr);

    for(int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}

void pre_suf(char sub[], int arr[]) {
    int m = strlen(sub);
    
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
}
