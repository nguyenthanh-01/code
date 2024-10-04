#include <stdio.h>
#include <stdbool.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    bool flag = false;

    while(n--) {
        int x;
        scanf("%d", &x);

        if(x == 2022) {
            flag = true;
        }
    }

    if(flag == true) {
        printf("yes");
    }
    else {
        printf("no");
    }

    return 0;
}
