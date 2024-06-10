// typedef đặt tên
// (ll) ép kiểu
#include<stdio.h>

typedef long long ll;

int main() {
    int x = 0;
    scanf("%d", &x);
    ll ans = (ll) x * x;
    printf("%lld \n", ans);
    return 0;
}
