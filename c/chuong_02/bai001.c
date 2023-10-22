#include <stdio.h>

typedef long long ll;

int main() {
  int a;
  scanf("%d", &a);
  printf("%lld \n", 1ll * a * (a + 1) / 2);
  return 0;
}

/*
n(n + 1) / 2
*/
