#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);

    ll sum = 0;
    int _n = sqrt(n) + 1;

    for(int i = 1; i < _n; i++) {
        if(n%i == 0) {
            sum += i;
            
            if(i != n / i) {
                sum += n / i;
            }
        }
    }

    printf("Tong = %lld", sum);

    return 0;
}
