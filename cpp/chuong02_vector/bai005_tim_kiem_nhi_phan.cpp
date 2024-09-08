#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;

inline bool cmp(int &a, int &b) {return a < b;}

int lower(vi &, int, int, int);
int upper(vi &, int, int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vi arr = {0, 3, 2, 4, 8, 3, 5, 4, 3, 4};

    sort(all(arr), cmp);

    int n = sz(arr);
    int x; cin >> x;

    int lb = lower(arr, 0, n - 1, x);

    if(lb < 0) {
        cout << "khong tim thay \n";
    }
    else {
        cout << "vi tri: " << lb << " \n";
    }

    return 0;
}

int lower(vi &arr, int l, int r, int x) {
    int pos = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            r = m - 1;
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

int upper(vi &arr, int l, int r, int x) {
    int pos = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            l = m + 1;
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
