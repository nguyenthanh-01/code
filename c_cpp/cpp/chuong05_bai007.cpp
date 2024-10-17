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
    int n; cin >> n;

    vi arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vi arr_sum;
    arr_sum.pb(arr[0]);

    for(int i = 1; i < sz(arr); i++) {
        arr_sum.pb(arr_sum[i - 1] + arr[i]);
    }

    for(int i : arr_sum) {
        cout << i << " ";
    }

    return 0;
}
