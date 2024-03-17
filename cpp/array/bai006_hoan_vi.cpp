#include <bits/stdc++.h>
using namespace std;
                                                                         
#define n 3
#define array array<int, n>
#define xuat(a) for(int &i: a) {cout << i;} cout << "\n";

void dq(array &, int);

int main() {
    array arr = {1, 2, 3};
    dq(arr, 0);
    return 0;
}

void dq(array &arr, int pos) {
    if (pos == n-1) {
        xuat(arr);
        return;
    }
    for (int i = pos; i < n; i++) {
        swap(arr[i], arr[pos]);
        dq(arr, pos + 1);
        swap(arr[i], arr[pos]);
    }
}
