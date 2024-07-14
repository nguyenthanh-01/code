#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void find(char [], char []);

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

    for(int i = 0; i < n - m + 1; i++) {
        bool flag = true;

        for(int j = 0; j < m; j++) {
            if(str[i + j] != sub[j]) {
                flag = false;
                break;
            }
        }

        if(flag) {
            printf("%d ", i + 1);
        }
    }
}
