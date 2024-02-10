#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> arr;
    for (int i = 0; i < n; i++) {
        cin >> arr.at(i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr.at(i));
    }
    printf("\n");
    return 0;
}
