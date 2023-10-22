#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    double ac = 0;
    for (int i = 1; i <= a; i++) {
    	ac += (1.0 / i);
	}
	printf("%.3lf \n", ac);
    return 0;
}
