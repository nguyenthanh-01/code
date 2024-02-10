#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> arr;
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cin >> *it;
    }
    for (auto it = arr.begin(); it != arr.end(); it++) {
        printf("%d ", *it);
    }
    printf("\n");
    for (auto it = arr.rbegin(); it != arr.rend(); it++) {
        printf("%d ", *it);
    }
    printf("\n");
    return 0;
}
