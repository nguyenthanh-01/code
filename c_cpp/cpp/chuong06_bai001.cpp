#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

#define n (int) 1e7

bool arr[n];

void sang_nt();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sang_nt();

    int x;

    while(cin >> x) {
        if(arr[x] == true) {
            printf("yes ");
        }
        else {
            printf("no ");
        }
    }

    return 0;
}

void sang_nt() {
    arr[2] = true;

    for(int i = 3; i < n; i += 2) {
        arr[i] = true;
    }

    int _n = sqrt(n) + 1;

    for(int i = 3; i < _n; i += 2) {
        if(arr[i] == true) {
            for(int j = i * i; j < n; j += i) {
                arr[j] = false;
            }
        }
    }
}
