#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back
#define fi first
#define se second

typedef pair<int, int> pi;
typedef vector<pi> vii;
typedef map<int, int> mp;

inline bool cmp(pi &i, pi &j) {return i.se > j.se;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int arr[n];
    mp sub;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sub[arr[i]]++;
    }

    vii vec;

    for(pi i : sub) {
        vec.pb({i.fi, i.se});
    }

    sort(all(vec), cmp);

    for(pi i : vec) {
        cout << i.fi << " " << i.se << "\n";
    }

    return 0;
}
