#include <stdio.h>
#include <math.h>

#define yes printf("YES \n");
#define no printf("NO \n");

typedef long long ll;

int nt (int);

int main() {
    int a;
    scanf("%d", &a);
    if (nt(a)) {
        yes;
    }
    else no;
    return 0;
}

int nt (int a) {
    int tmp = sqrt(a);
    for (int i = 2; i <= tmp; i++) {
        if (a%i == 0) {
            return 0;
        }
    }
    return a > 1;
}
