#include <stdio.h>

typedef long long ll;

int main() {
    ll a;
    scanf("%lld", &a);
    if (a == 0) {
        printf("1 \n");
        return 0;
    }
    int cnt = 0;
    while (a) {
        cnt++;
        a /= 10;
    }
    printf("%d", cnt);
    return 0;
}

/*
error: while (0) kết thúc nhưng 0 cũng là 1 số có 1 đơn vị
*/
