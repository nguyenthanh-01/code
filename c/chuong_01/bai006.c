#include <stdio.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;
 
int main() {
	int a;
	scanf("%d", &a);
	(a%2 == 0) ? yes : no;
	(a%15 == 0) ? yes : no;
	(a%3 == 0 && a%7) ? yes : no;
	(a%3 == 0 || a%7 == 0) ? yes : no;
	(a > 30 && a < 50) ? yes : no;
	(a >= 30 && (a%2 == 0 || a%3 == 0 || a%5 == 0)) ? yes : no;
	int res = a%10;
	(a >= 10 && a <= 99 && (res == 2 || res == 3 || res == 5 || res == 7)) ? yes : no;
	(a <= 100 && a%23 == 0) ? yes : no;
	(a < 10 || a > 20) ? yes : no;
	(res%3 == 0) ? yes : no;
    return 0;
}
