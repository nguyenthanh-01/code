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
typedef bool (*func_cmp)(int &, int &);
typedef void (*func_bin)(int &, int &, int &);

inline bool cmp_tang(int &i, int &j) {return i > j;}
inline bool cmp_giam(int &i, int &j) {return i < j;}
inline void bin_lower(int &l, int &r, int &m) {r = m - 1;}
inline void bin_upper(int &l, int &r, int &m) {l = m + 1;}

void my_tron(vi &, int, int, int, func_cmp);
void merge_sort(vi &, int, int, func_cmp);

int bin_search(vi &, int, int, int, func_bin);

int main() {
    int n; cin >> n;

    vi arr(n);

    for(int &i : arr) {
        cin >> i;
    }

    merge_sort(arr, 0, n - 1, cmp_tang);

    int x; cin >> x;

    int pos1 = bin_search(arr, 0, n - 1, x, bin_lower);
    int pos2 = bin_search(arr, 0, n - 1, x, bin_upper);

    for(int i : arr) {
        cout << i << " ";
    }
    cout << "\n";

    if(pos1 < 0) {
        cout << "khong tim thay x \n";
    }
    else {
        cout << "vi tri bat dau: " << pos1 << "\n";
        cout << "vi tri ket thuc: " << pos2 << "\n";
    }

    return 0;
}

void my_tron(vi &arr, int l, int r, int m, func_cmp cmp) {
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

void merge_sort(vi &arr, int l, int r, func_cmp cmp) {
    if(l >= r) {
        return;
    }

    int m = (r - l) / 2 + l;

    merge_sort(arr, l, m, cmp);
    merge_sort(arr, m + 1, r, cmp);
    my_tron(arr, l, r, m, cmp);
}

int bin_search(vi &arr, int l, int r, int x, func_bin bin) {
    int pos = -1;

    while(l <= r) {
        int m = (r - l) / 2 + l;

        if(arr[m] == x) {
            pos = m;
            bin(l, r, m);
        }
        else if(arr[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}
