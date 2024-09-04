#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vi arr = {0, 3, 2, 4, 8, 3, 5, 4, 3, 4};

    while(!arr.empty()) {
        arr.pp();
    }

    cout << sz(arr);

    return 0;
}
