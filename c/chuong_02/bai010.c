#include <stdio.h>

#define yes printf("YES \n")
#define no printf("NO \n")

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	int flag = 0;
	for (int i = 0; i < a; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp == 2022) {
			flag = 1;
		}
	}
	flag ? yes : no;
	return 0;
}
