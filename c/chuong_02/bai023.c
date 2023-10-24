#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    
    int cnt = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cnt++;
            printf("%d ", cnt);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", j + i + 1);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j < a - i - 1) {
                printf("~");
            }
            else printf("%d", i + 1);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < a; i++) {
        int tmp = i + 1;
        printf("%d ", tmp);
        for (int j = 0; j < i; j++) {
            tmp += (a - j - 1);
            printf("%d ", tmp);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}
