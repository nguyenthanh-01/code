#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> arr;
    arr.fill(1);
    for (int &i: arr) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
