#include <stdio.h>

typedef long long ll;

int main() {
  int a;
  scanf("%d", &a);
  printf("%lld \n", 1ll * (a / 3) * (a - a%3 + 3) / 2);
  return 0;
}

/*
n(n[-1] + n[0]) / 2
*/
