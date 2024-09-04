#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;

inline bool cmp(int &a, int &b) {return a > b;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vi arr = {0, 3, 2, 4, 8, 3, 5, 4, 3, 4};

    sort(all(arr), cmp);

    for(auto it : arr) {
        cout << it << " ";
    }

    return 0;
}
