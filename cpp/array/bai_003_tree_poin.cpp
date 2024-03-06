#include <bits/stdc++.h>
using namespace std;
                                                               
#define n 6

int main() {
    array<int, n> arr = {0, 1, 2, 0, 1, 2};
    int lo = 0;
    int mid = 0;
    int hi = n - 1;
    while (mid <= hi) {
        if (arr[mid] == 0) swap(arr[lo++], arr[mid++]);
        else if (arr[mid] == 1) mid++;
        else if (arr[mid] == 2) swap(arr[mid], arr[hi--]);
    }
    for (int &i: arr) {
       cout << i << " ";
    }
    cout << "\n";
    return 0;
}
