#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void find(char [], char []);
void pre_suf(char [], int []);

int main() {
    char str[100];
    fgets(str, 100, stdin);

    char sub[100];
    fgets(sub, 100, stdin);

    find(str, sub);

    return 0;
}

void find(char str[], char sub[]) {
    int n = strlen(str);
    int m = strlen(sub);

    str[--n] = '\0';
    sub[--m] = '\0';

    int *arr = (int*) calloc(m, sizeof(int));

    pre_suf(sub, arr);

    int i = 0;
    int j = 0;

    while(i < n) {
        if(str[i] == sub[j]) {
            i++;
            j++;
            if(j == m) {
                j = arr[j - 1];
                printf("%d ", i - m + 1);
            }
        }
        else {
            if(j != 0) {
                j = arr[j - 1];
            }
            else {
                i++;
            }
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
