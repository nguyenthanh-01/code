#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void find(char [], char []);
void pre_suf(char [], int []);

int main() {
    char str[100] = "1011010110110101101011011010110110101101011011010110101"

    char sub[100];
    fgets(sub, 100, stdin);

    find(str, sub);

    return 0;
}

void find(char str[], char sub[]) {
    int n = strlen(str);
    int m = strlen(sub);
    
    sub[--m] = '\0';

    int *arr = (int*) calloc(m, sizeof(int));

    pre_suf(sub, arr);

    for(int i = 0; i < n - m + 1; i++) {
        bool flag = true;

        for(int j = 0; j < m; j++) {
            if(str[i + j] != sub[j]) {
                i += arr[j];
                flag = false;
                break;
            }
        }

        if(flag) {
            printf("%d ", i + 1);
        }
    }

    free(arr);
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
