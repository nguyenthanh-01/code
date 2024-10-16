#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back
#define fi first
#define se second

typedef struct {int a; int b;} ii;
typedef pair<int, int> pi;
typedef vector<ii> vii;
typedef map<int, int> mp;

inline bool cmp(ii &i, ii &j) {
    if(i.b < j.b) return true;
    if(i.b == j.b) return (i.a > j.a) ? true : false;
    return false;
}

int main() {
    int n; cin >> n;
    mp arr_map;

    while(n--) {
        int x; cin >> x;
        arr_map[x]++;
    }

    vii arr;

    for(pi i : arr_map) {
        arr.pb({i.fi, i.se});
    }

    sort(all(arr), cmp);

    for(ii i : arr) {
        cout << i.a << " " << i.b << "\n";
    }

    return 0;
}
