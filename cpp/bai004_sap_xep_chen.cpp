#include <bits/stdc++.h>
using namespace std;

#define n 5
#define array array<int, n>

void sx_chen(array &);
void xuat(array &);

int main() {
    array arr = {1, 2, 3, 4, 5};
    sx_chen(arr);
    xuat(arr);
    return 0;
}

void sx_chen(array &arr) {
    for (int i = 1; i < n; i++) {
        int key = i - 1;
        int val = arr[i];
        while (key >= 0 && val > arr[key]) {
            arr[key+1] = arr[key];
            key--;
        }
        arr[key+1] = val;
    }
}

void xuat(array &arr) {
    for (int &i: arr) {
        cout << i << " ";
    }
    cout << "\n";
}
