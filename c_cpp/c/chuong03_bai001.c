#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool check_nt(int);

int main() {
    int n;
    scanf("%d", &n);

    if(check_nt(n) == true) {
        printf("yes");
    }
    else {
        printf("no");
    }

    return 0;
}

bool check_nt(int n) {
    if(n < 2) {
        return false;
    }

    if(n == 2) {
        return true;
    }

    if(n%2 == 0) {
        return false;
    }

    int _n = sqrt(n) + 1;

    for(int i = 3; i < _n; i += 2) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}
