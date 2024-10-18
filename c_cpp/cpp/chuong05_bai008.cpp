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

    vi arr(n);

    for(int &i : arr) {
        cin >> i;
    }

    int m = n - k + 1;
    vi arr_win(m);

    for(int i = 0; i < k; i++) {
        arr_win[0] += arr[i];
    }

    for(int i = 1; i < m; i++) {
        arr_win[i] = arr_win[i - 1] - arr[i - 1] + arr[i + k - 1];
    }

    for(int i : arr_win) {
        cout << i << " ";
    }

    return 0;
}
