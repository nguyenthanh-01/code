#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> ar;
    for (int &i: ar) {
        cin >> i;
    }
    printf("%d %d \n", ar[0], ar.back());
    return 0;
}
