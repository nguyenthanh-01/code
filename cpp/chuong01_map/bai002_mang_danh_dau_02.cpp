#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fi first
#define se second

typedef pair<int, int> pi;
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

    for(int i = 0; i < n; i++) {
        if(sub[arr[i]] != 0) {
            cout << arr[i] << " " << sub[arr[i]] << "\n";
            sub[arr[i]] = 0;
        }
    }

    return 0;
}
