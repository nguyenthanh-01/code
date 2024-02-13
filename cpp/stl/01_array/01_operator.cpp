#include <bits/stdc++.h>
using namespace std;

#define n 5

int main() {
    array<int, n> arr;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
