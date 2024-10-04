#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int _n = sqrt(n) + 1;

    for(int i = 1; i < _n; i++) {
        if(n%i == 0) {
            printf("%d ", i);
            
            if(i != n / i) {
                printf("%d ", n / i);
            }
        }
    }

    return 0;
}
