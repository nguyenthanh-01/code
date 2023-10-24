#include <stdio.h>

typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("%d ", j * i);
		}
		printf("\n");
	}
	printf("\n");
		
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("%d ", j * i);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("%d ", j * i);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
