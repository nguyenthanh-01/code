#include <stdio.h>

#define ll long long

int ucln(int, int);

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int tmp = arr[0];

    for(int i = 1; i < n; i++) {
        tmp = ucln(tmp, arr[i]);
    }

    printf("%d", tmp);

    return 0;
}

int ucln(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}
