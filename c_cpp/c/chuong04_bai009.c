#include <stdio.h>

#define ll long long

void thap_luc_phan(int, char []);

int main() {
    int n;
    scanf("%d", &n);

    char arr[] = "0123456789ABCDEF";

    thap_luc_phan(n, arr);

    return 0;
}

void thap_luc_phan(int n, char arr[]) {
    if(n == 0) {
        return;
    }

    int x = n % 16;
    thap_luc_phan(n / 16, arr);
    printf("%c", arr[x]);
}
