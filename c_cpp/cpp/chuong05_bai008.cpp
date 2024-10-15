#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;

int main() {
    int n, k;
    cin >> n >> k;

    vi arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.pb(x);
    }

    int m = n - k + 1;
    vi arr_window;

    for(int i = 0; i < m; i++) {
        arr_window.pb(0);

        for(int j = i; j < i + k; j++) {
            arr_window[i] += arr[j];
        }
    }

    for(int i : arr_window) {
        cout << i << " ";
    }

    return 0;
}
