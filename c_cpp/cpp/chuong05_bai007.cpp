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

    for(int &i : arr) {
        cin >> i;
    }

    vi arr_sum(n);
    arr_sum[0] = arr[0];

    for(int i = 1; i < n; i++) {
        arr_sum[i] = arr_sum[i - 1] + arr[i];
    }

    for(int i : arr_sum) {
        cout << i << " ";
    }

    return 0;
}
