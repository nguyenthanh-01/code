#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d \n", a + b + c);

    return 0;
}
