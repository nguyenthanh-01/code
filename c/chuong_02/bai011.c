#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    int ans = (a / 2) - (a%2 * a);
    printf("%d", ans);
    return 0;
}
