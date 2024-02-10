#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> ar = {};
    ar.fill(1);
    for (int &i: ar) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
