#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++) {
    	for (int j = 0; j <= i; j++) {
    		printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
    for (int i = a; i > 0; i--) {
    	for (int j = 0; j < i; j++) {
    		printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
    for (int i = 0; i < a; i++) {
    	for (int j = 0; j < a; j++) {
    		if (j < a - 1 - i) {
    			printf(" ");
			}
			else printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
    for (int i = 0; i < a; i++) {
    	for (int j = 0; j < a; j++) {
    		if (j > i - 1) {
    			printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
    for (int i = 0; i < a; i++) {
    	for (int j = 0; j <= i; j++) {
    		if (i == 0 || j == 0 || i == a - 1 || j == i) {
    			printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
    return 0;
}
