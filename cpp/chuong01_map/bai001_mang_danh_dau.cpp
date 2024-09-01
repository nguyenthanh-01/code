#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fi first
#define se second

typedef map<int, int> mp;

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

    for(auto it : sub) {
        cout << it.fi << " " << it.se << "\n";
    }

    return 0;
}
