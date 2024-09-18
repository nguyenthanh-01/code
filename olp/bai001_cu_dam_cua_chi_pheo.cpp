#include <bits/stdc++.h>
using namespace std;

#define n 142

typedef array<int, n> arr;

int main() {
    arr arr_dame;
    arr_dame[0] = 0;

    for(int i = 1; i < n; i++) {
        arr_dame[i] = arr_dame[i - 1] + i;
    }

    arr arr_sum;
    arr_sum[0] = 0;

    int x; cin >> x;

    for(int i = 1; i < n; i++) {
        arr_sum[i] = arr_sum[i - 1] + arr_dame[i];

        if(arr_sum[i] > x) {
            cout << i - 1;
            break;
        }
    }

    return 0;
}
