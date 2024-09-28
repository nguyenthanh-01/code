#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef vector<string> vs;

void test(string, vs &, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vs arr;

    string str; cin >> str;
    arr.pb(str);

    test(str, arr, 0);

    for(int i = 1; i < sz(str); i++) {
        test(arr[i], arr, 1);
    }

    sort(all(arr));

    for(string i : arr) {
        cout << i << "\n";
    }

    return 0;
}

void test(string str, vs &arr, int pos) {
    int n = sz(str);

    for(int i = pos; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            string sub = str;
            swap(sub[i], sub[j]);
            arr.pb(sub);
        }
    }
}
