#include <stdio.h>
#include <math.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;

ll lt_np (ll, ll);
int nt (ll);
int hh (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    if (hh(a)) {
        yes;
    }
    else no;
    return 0;
}

ll lt_np(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b%2) {
            res *= a;
        }
        a *= a;
        b /= 2;
    }
    return res;
}

int nt (ll a) {
    int tmp = sqrt(a);
    for (int i = 2; i <= tmp; i++) {
        if (a%i == 0) {
            return 0;
        }
    }
    return a > 1;
}

int hh (ll a) {
    for (int i = 2; i <= 31; i++) {
        if (nt(i)) {
            ll tmp1 = lt_np(2, i) - 1;
            if (nt(tmp1)) {
                ll tmp2 = lt_np(2, i - 1) * tmp1;
                if (tmp2 == a) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
