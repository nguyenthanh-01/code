#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef struct {int a; int b;} ii;
typedef vector<ii> vii;

inline bool cmp(ii &i, ii &j) {return i.a > j.a;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vii arr = {{0, 3}, {2, 4}, {8, 3}, {5, 4}, {3, 4}};

    sort(all(arr), cmp);

    for(ii i : arr) {
        cout << i.a << " " << i.b << "\n";
    }

    return 0;
}
