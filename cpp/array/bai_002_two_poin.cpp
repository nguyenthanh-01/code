#include <bits/stdc++.h>
using namespace std;
                                                 
#define n 5

int main() {
    array<int, n> arr = {-1, 2, -3, 4, -5};
    int l = 0;
    int r = n - 1;
    while (l < r) {
        if (arr[l] < 0) l++;
        else if (arr[r] < 0) {
            swap(arr[l], arr[r]);
            r--;
        }
        else r--;
    }
    for (int &i: arr) {
       cout << i << " ";
    }
    cout << "\n";
    return 0;
}
