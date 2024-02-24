#include <bits/stdc++.h>
using namespace std;

#define n 5
#define array array<int, n>

void sx_noi_bot(array &);
void xuat(array &);

int main() {
    array arr = {1, 2, 3, 4, 5};
    sx_noi_bot(arr);
    xuat(arr);
    return 0;
}

void sx_noi_bot(array &arr) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void xuat(array &arr) {
    for (int &i: arr) {
        cout << i << " ";
    }
    cout << "\n";
}
