#include <stdio.h>

#define ll long long

void hexa(int, char []);

int main() {
    int n;
    scanf("%d", &n);

    char arr[] = "0123456789ABCDEF";

    hexa(n, arr);

    return 0;
}

void hexa(int n, char arr[]) {
    if(n == 0) {
        return;
    }

    int x = n % 16;
    hexa(n / 16, arr);
    printf("%c", arr[x]);
}
