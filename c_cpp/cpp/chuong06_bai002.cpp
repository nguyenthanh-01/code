#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

#define all(a) (a).begin(), (a).end()

typedef vector<int> vi;

void my_tron(vi &, int, int, int);
void merge_sort(vi &, int, int);

int main() {
    int n; cin >> n;

    vi arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}

void my_tron(vi &arr, int l, int r, int m) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vi arr1(n1);
    vi arr2(n2);

    for(int i = l; i <= m; i++) {
        arr1[i - l] = arr[i];
    }

    for(int i = m + 1; i <= r; i++) {
        arr2[i - m - 1] = arr[i];
    }

    merge(all(arr1), all(arr2), arr.begin() + l);
}

void merge_sort(vi &arr, int l, int r) {
    if(l >= r) {
        return;
    }

    int m = (r - l) / 2 + l;

    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    my_tron(arr, l, r, m);
}
