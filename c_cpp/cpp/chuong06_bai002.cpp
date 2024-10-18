#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

#define all(a) (a).begin(), (a).end()
#define sz(a) (int) (a).size()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;
typedef bool (*func)(int &, int &);

inline bool cmp_tang(int &i, int &j) {return i > j;}
inline bool cmp_giam(int &i, int &j) {return i < j;}

void my_tron(vi &, int, int, int, func);
void merge_sort(vi &, int, int, func);

int main() {
    int n; cin >> n;

    vi arr(n);
    vi arr1;
    vi arr2;

    for(int &i : arr) {
        cin >> i;

        if(i%2 == 0) {
            arr1.pb(i);
        }
        else {
            arr2.pb(i);
        }
    }

    merge_sort(arr1, 0, sz(arr1) - 1, cmp_tang);
    merge_sort(arr2, 0, sz(arr2) - 1, cmp_giam);

    for(int i : arr2) {
        cout << i << " ";
    }

    for(int i : arr1) {
        cout << i << " ";
    }

    return 0;
}

void my_tron(vi &arr, int l, int r, int m, func cmp) {
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

void merge_sort(vi &arr, int l, int r, func cmp) {
    if(l >= r) {
        return;
    }

    int m = (r - l) / 2 + l;

    merge_sort(arr, l, m, cmp);
    merge_sort(arr, m + 1, r, cmp);
    my_tron(arr, l, r, m, cmp);
}
