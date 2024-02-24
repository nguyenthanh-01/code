#include <bits/stdc++.h>
using namespace std;

#define n 5
#define array array<int, n>

inline void xuat(array &arr) {for (int &i: arr) {cout << i << " ";}cout << "\n";}
void sx_chon(array &);

int main() {
    array arr = {1, 2, 3, 4, 5};
    sx_chon(arr);
    xuat(arr);
    return 0;
}

void sx_chon(array &arr) {
    for (int i = 0; i < n - 1; i++) {
        int key = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[key] < arr[j]) {
                key = j;
            }
        }
        swap(arr[i], arr[key]);
    }
}
