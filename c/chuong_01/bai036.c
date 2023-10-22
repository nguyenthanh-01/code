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
        else if (c == 0) printf("0.00");
        else printf("%.2lf \n", -1.0 * c / b);
    }
    else {
        int ac = b * b - 4 * a * c;
        if (ac < 0) vn;
        else if (ac == 0) {
            printf("%.2lf \n", -1.0 * b / (2 * a));
        }
        else {
            double ac1 = (-b - sqrt(ac)) / (2 * a);
            double ac2 = (-b + sqrt(ac)) / (2 * a);
            printf("%.2lf %.2lf \n", ac1, ac2);
        }
    }
    return 0;
}

/*
pt2
a == 0
    x = 0
    x = -c / b
b == 0 vô nghiệm
c == 0 vô số nghiệm
delta = b * b - 4 * a * c
delta < 0 vô nghiệm
delta == 0 x = -b / (2 * a)
delta > 0
    x1 = (-b - delta ** 0.5) / (2 * a)
    x2 = (-b + delta ** 0.5) / (2 * a)
*/
