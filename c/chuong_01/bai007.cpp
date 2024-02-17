#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = a / b * b;
    int y = (a + b - 1) / b * b;
    printf("%d %d \n", x, y);
    return 0;
}
