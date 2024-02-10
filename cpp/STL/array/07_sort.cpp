#include <bits/stdc++.h>
using namespace std;

#define n 5
#define all(a) (a).begin(), (a).end()

typedef long long ll;

int main() {
    array<int, n> arr;
    for (int &i: arr) {
        cin >> i;
    }
    sort(all(arr));
    for (int &i: arr) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
