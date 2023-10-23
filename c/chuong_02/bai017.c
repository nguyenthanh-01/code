#include <stdio.h>

typedef long long ll;

int main() {
  ll a;
  scanf("%lld", &a);
  int res = 0;
  while (a) {
    res += a%10;
    a /= 10;
  }
  printf("%d", res);
  return 0;
}
