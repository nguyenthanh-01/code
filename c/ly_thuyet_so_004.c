#include <stdio.h>
#include <math.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;

int nt (ll);
void ts_nt (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    if (nt(a)) {
        yes;
    }
    else no;
    ts_nt(a);
    return 0;
}

int nt (ll a) {
    if (a < 2) return 0;
    if (a == 2) return 1;
    if (a%2 == 0) return 0;
    int tmp = sqrt(a);
    for (int i = 3; i <= tmp; i += 2) {
        if (a%i == 0) {
            return 0;
        }
    }
    return 1;
}

void ts_nt (ll a) {
    if (a < 2) return;
    while (a%2 == 0) {
        printf("2 ");
        a /= 2;
    }
    ll i = 3;
    while (i * i <= a) {
        while (a%i == 0) {
            printf("%lld ", i);
            a /= i;
        }
        i += 2;
    }
    if (a > 1) printf("%lld ", a);
    printf("\n");
}

/*
error: i <= sqrt(a)
*/
