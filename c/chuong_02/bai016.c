#include <stdio.h>

typedef long long ll;

int main() {
  ll a;
  scanf("%lld", &a);
  int cnt = 0;
  while (a) {
    cnt++;
    a /= 10;
  }
  printf("%d", cnt);
  return 0;
}
