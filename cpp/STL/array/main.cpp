#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> ar;
    for (int &i: ar) {
        cin >> i;
    }
    for (int &i: ar) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
