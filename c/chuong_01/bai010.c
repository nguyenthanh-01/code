#include <stdio.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) ? yes : no;
    return 0;
}
