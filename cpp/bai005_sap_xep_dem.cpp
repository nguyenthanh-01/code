#include <bits/stdc++.h>
using namespace std;

#define n 5
#define array array<int, n>
#define fi first
#define se second

void sx_dem(array &);
void xuat(array &);

int main() {
    array arr = {5, 4, 4, 2, 1};
    sx_dem(arr);
    xuat(arr);
    return 0;
}

void sx_dem(array &arr) {
    map<int, int> mp;
    for (int &i: arr) {
        mp[i]++;
    }
    int key = 0;
    for (auto &i: mp) {
        for (int j = 0; j < i.se; j++) {
            arr[key] = i.fi;
            key++;
        }
    }
}

void xuat(array &arr) {
    for (int &i: arr) {
        cout << i << " ";
    }
    cout << "\n";
}
