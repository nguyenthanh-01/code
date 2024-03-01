/*
# đề
input: array
output: chuyển số 0 về cuối
*/
#include <bits/stdc++.h>
using namespace std;
                                                                         
#define n 5
#define all(a) (a).begin(), (a).end()

inline bool cmp(int &i) {return i != 0;}

int main() {
    array<int, n> arr = {0, 2, 0, 4, 5};
    stable_partition(all(arr), cmp);
    for (int &i: arr) {
        cout << i << " ";
    }
    return 0;
}
