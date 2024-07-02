%%writefile test.c
#include <stdio.h>
#include <stdbool.h>

typedef long long ll;

void so_nguyen();
void so_thuc();
void ky_tu();
void dung_sai();

int main() {
    so_nguyen();
    so_thuc();
    ky_tu();
    dung_sai();
    return 0;
}

void so_nguyen() {
    short a; // 2 byte + %hd
    int b; // 4 byte + %d
    ll c; // 8 byte + %lld

    scanf("%hd %d %lld ", &a, &b, &c);
    printf("%hd %d %lld \n", a, b, c);
}

void so_thuc() {
    float a; // 4 byte + %.7f
    double b; // 8 byte + %.15lf

    scanf("%f %lf ", &a, &b);
    printf("%.7f %.15lf \n", a, b);
}

void ky_tu() {
    char a; // 1 byte + %hd + %c

    scanf("%c ", &a);
    printf("%hd %c \n", a, a);
}

void dung_sai() {
    bool a; // 1 byte + true + false
}
