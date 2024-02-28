/*
# đề
input: array
output: 3 số lớn nhất
*/
#include <bits/stdc++.h>
using namespace std;
                                                                         
#define n 5
#define par_all(x, a) (a).begin(), (a).begin() + x, (a).end()

inline bool cmp(int &i, int &j) {return i > j;}

int main() {
    array<int, n> arr = {1, 2, 3, 4, 5};
    partial_sort(par_all(3, arr), cmp);
    for (int &i: arr) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
