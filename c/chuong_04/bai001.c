#include <stdio.h>

int tong (int);

int main() {
  int a;
  scanf("%d", &a);
  printf("%d \n", tong(a));
  return 0;
}

int tong (int a) {
  int res = 0;
  while (a) {
    res += a;
    a--;
  }
  return res;
}
