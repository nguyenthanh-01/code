#include <bits/stdc++.h>
using namespace std;

#define n 5
#define array array<bool, n>

int main() {
    array arr;
    arr.fill(1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
