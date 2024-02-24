#include <bits/stdc++.h>
using namespace std;

#define n (int) 1e7
array<bool, n> arr;

void sang_nt();
void xuat();

int main() {
    sang_nt();
    xuat();
    return 0;
}

void sang_nt() {
    arr.fill(1);
    arr[0] = arr[1] = false;
    for (int i = 0; i*i < n; i++) {
        if (arr[i] == true) {
            for (int j = i*i; j < n; j += i) {
                arr[j] = false;
            }
        }
    }
}

void xuat() {
    for (int i = 0; i < 100; i++) {
        if (arr[i] == true) {
            cout << i << " ";
        }
    }
    cout << "\n";
}
