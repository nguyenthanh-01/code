#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define size(a) (int) (sizeof(a) / sizeof(a[0]))
#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) (a) < (b) ? (a) : (b)

typedef long long ll;
typedef struct {int a; int b;} ii;

const int inf = (int) 1e9;
const double pi = acos(-1);

static inline ll gcd(ll a, ll b) {ll r; while(b) {r = a % b; a = b; b = r;} return a;}
static inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
static inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while(r * r * r > k) r--; return r;}
static inline bool cmp(int a, int b) {return a > b;}
static inline bool cmp(ii i, ii j) {return i.a > j.a;}

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
    bool a = true; // 1 byte + true + false
    if(a) {
        printf("true");
    }
}
