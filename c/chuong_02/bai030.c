#include <stdio.h>

#define yes printf("EVEN \n")
#define no printf("ODD \n")

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        int tmp;
        scanf("%d", &tmp);
        (tmp%2 == 0) ? yes : no;
    }
    return 0;
}
