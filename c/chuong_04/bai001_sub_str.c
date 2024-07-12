#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int find(char [], char []);

int main() {
    char str[100] = "100";

    char sub[100];
    fgets(sub, 100, stdin);

    int cnt = find(str, sub);

    printf("%d \n", cnt);
    return 0;
}

int find(char str[], char sub[]) {
    int n = strlen(str);
    int m = strlen(sub);

    int cnt = 0;
    sub[--m] = '\0';

    for(int i = 0; i < n - m + 1; i++) {
        bool flag = true;

        for(int j = 0; j < m; j++) {
            if(str[i + j] != sub[j]) {
                flag = false;
                break;
            }
        }

        if(flag) cnt++;
    }
    return cnt;
}
