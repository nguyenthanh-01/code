#include <stdio.h>

int tich (int);

int main() {
  int a;
  scanf("%d", &a);
  printf("%d \n", tich(a));
  return 0;
}

int tich (int a) {
  int res = a * a;
  while (a--) {
    res += (a * a);
  }
  return res;
}
