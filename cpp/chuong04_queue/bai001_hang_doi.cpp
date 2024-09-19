#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef vector<string> vs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vs arr;
    arr.pb("0");
    arr.pb("1");

    int n; cin >> n;
    int pos = 0;

    while(true) {
        if(sz(arr[pos]) == n) {
            break;
        }

        arr.pb(arr[pos] + "0");
        arr.pb(arr[pos] + "1");

        pos++;
    }

    for(int i = pos; i < sz(arr); i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}
