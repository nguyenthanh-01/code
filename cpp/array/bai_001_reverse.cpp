#include <bits/stdc++.h>
using namespace std;
                                                 
#define n 5

int main() {
    array<int, n> arr = {1, 2, 3, 4, 5};
    int pos = n - 1;
    for (int i = 0; i < pos; i++) {
        swap(arr[i], arr[pos]);
        pos--;
    }
    for (int &i: arr) {
       cout << i << " ";
    }
    cout << "\n";
    return 0;
}
