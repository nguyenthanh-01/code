#include <stdio.h>

void np (int);

int main() {
  int a;
  scanf("%d", &a);
  np(a);
  return 0;
}

void np (int a) {
  if (a == 0) return;
  np(a / 2);
  printf("%d", a % 2);
}
