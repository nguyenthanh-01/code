#include <bits/stdc++.h>
using namespace std;

#define n 5
#define sz(a) (int) (a).size()

typedef long long ll;

int main() {
    array<int, n> arr;
    for (int i = 0; i < sz(arr); i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < sz(arr); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d \n", sizeof(arr));
    return 0;
}
