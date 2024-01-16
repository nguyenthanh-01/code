#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float tb = (a + b + c * 2 + d * 3) / 7;
    if (tb < 5) {
        printf("YEU");
    }
    else if (tb < 6.5) {
        printf("TRUNG BINH");
    }
    else if (tb < 8) {
        printf("KHA");
    }
    else printf("GIOI");
    return 0;
}
