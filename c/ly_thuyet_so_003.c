#include <stdio.h>

typedef long long ll;

int main() {
  int f0 = 0;
  int f1 = 1;
  printf("0 1 ");
  for (int i = 1; i <= 5; i++) {
    int tmp = f0 + f1;
    f0 = f1;
    f1 = tmp;
    printf("%d ", tmp);
  }
  printf("\n");
  return 0;
}
