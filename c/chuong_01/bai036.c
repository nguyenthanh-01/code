#include <stdio.h>
#include <math.h>

#define vs printf("VO SO NGHIEM \n")
#define vn printf("VO NGHIEM \n")

typedef long long ll;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) vs;
            else vn;
        }
        else printf("%.2lf \n", c ? -1.0 * c / b : 0);
    }
    else {
        int delta = b * b - 4 * a * c;
        if (delta < 0) vn;
        else if (delta == 0) {
            printf("%.2lf \n", -1.0 * b / (2 * a));
        }
        else {
            double ans1 = (-b - sqrt(delta)) / (2 * a);
            double ans2 = (-b + sqrt(delta)) / (2 * a);
            printf("%.2lf %.2lf \n", ans1, ans2);
        }
    }
    return 0;
}

/*
pt2
a == 0
    x = 0
    x = -c / b
b == 0 vo nghiem
c == 0 vo so nghiem
delta = b * b - 4 * a * c
delta < 0 vo nghiem
delta == 0 x = -b / (2 * a)
delta > 0
    x1 = (-b - delta ** 0.5) / (2 * a)
    x2 = (-b + delta ** 0.5) / (2 * a)
error: a == 0 && b == 1 && c == 0 x = -c / b = -0 (double)
*/
