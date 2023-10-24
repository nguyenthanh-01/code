#include <stdio.h>

typedef long long ll;

int main() {
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float tmp = (a + b + c * 2 + d * 3) / 7;
    if (tmp < 5) {
        printf("YEU \n");
    }
    else if (tmp < 6.5) {
        printf("TRUNG BINH \n");
    }
    else if (tmp < 8) {
        printf("KHA \n");
    }
    else printf("GIOI \n");
    return 0;
}
