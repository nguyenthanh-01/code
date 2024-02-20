#include <bits/stdc++.h>
using namespace std;

#define sz(a) (int) (a).size()
#define n (int) 1e7
array<bool, n> arr;

void sang_nt();

int main() {
    sang_nt();
    return 0;
}

void sang_nt() {
    arr.fill(1);
    arr[0] = arr[1] = 0;
    for (int i = 0; i*i < sz(arr); i++) {
        if (arr[i] == true) {
            for (int j = i*i; j < sz(arr); j += i) {
                arr[j] = false;
            }
        }
    }
}
