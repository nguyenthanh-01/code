#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi arr;

    while(n--) {
        int x; cin >> x;
        arr.pb(x);
    }

    for(int &i : arr) {
        cout << i << " ";
    }

    return 0;
}
