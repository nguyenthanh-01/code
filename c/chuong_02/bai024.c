#include <stdio.h>

typedef long long ll;

int main() {
  ll a, b;
  scanf("%lld %lld", &a, &b);
  ll tmp = (a < b) ? a : b;
  ll res = 1;
  while (tmp) {
    res *= tmp;
    tmp--;
  }
  printf("%lld \n", res);
  return 0;
}
