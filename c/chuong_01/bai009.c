#include <stdio.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    (a%400 == 0 || (a%4 == 0 && a%100)) ? yes : no;
    return 0;
}
