#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> ar;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}
