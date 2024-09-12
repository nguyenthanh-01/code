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

    string str; cin >> str;
    vi arr;

    for(char i : str) {
        if(i == '(') {
            arr.pb(i);
        }
        else {
            if(!arr.empty()) {
                arr.pp();
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    }

    if(sz(arr)) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }

    return 0;
}
