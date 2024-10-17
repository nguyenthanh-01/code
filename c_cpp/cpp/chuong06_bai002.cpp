#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

#define all(a) (a).begin(), (a).end()

typedef vector<int> vi;

inline bool cmp(int &i, int &j) {return i > j;}

void my_tron(vi &, int, int, int);
void merge_sort(vi &, int, int);

int main() {
    int n; cin >> n;

    vi arr(n);

    for(int &i : arr) {
        cin >> i;
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

    int i = 0;
    int j = 0;
    int k = l;

    while(i < n1 && j < n2) {
        if(cmp(arr1[i], arr2[j])) {
            arr[k++] = arr2[j++];
        }
        else {
            arr[k++] = arr1[i++];
        }
    }

    while(i < n1) arr[k++] = arr1[i++];
    while(j < n2) arr[k++] = arr2[j++];
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
