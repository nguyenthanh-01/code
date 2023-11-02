#include <stdio.h>
#include <math.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;

int sum (int);
int smith (int);

int main() {
    int a;
    scanf("%d", &a);
    if (smith(a)) {
        yes;
    }
    else no;
    return 0;
}

int sum (int a) {
    int res = 0;
    while (a) {
        res += a % 10;
        a /= 10;
    }
    return res;
}

int smith (int a) {
    int tmp = a;
    int res = 0;
    for (int i = 2; i <= sqrt(tmp); i++) {
        while (tmp%i == 0) {
            res += sum(i);
            tmp /= i;
        }
    }
    if (res == 0) return 0;
    if (tmp > 1) res += sum(tmp);
    return res == sum(a);
}
