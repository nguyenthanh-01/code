/*
# đề
input: array
output: số lớn thứ 2
*/
#include <bits/stdc++.h>
using namespace std;
                                                                         
#define n 5
#define all(a) (a).begin(), (a).end()

inline bool cmp(int &i, int &j) {return i > j;}

int main() {
    array<int, n> arr = {1, 2, 3, 5, 5};
    sort(all(arr), cmp);
    for (int &i: arr) {
        cout << i << " ";
    }
    cout << "\n";
    int max = arr[0];
    for (int &i: arr) {
        if (max != i) {
            max = i;
            break;
        }
    }
    if (max == arr[0]) {
        cout << "No\n";
    }
    else cout << max << "\n";
    return 0;
}
