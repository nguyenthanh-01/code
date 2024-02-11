#include <bits/stdc++.h>
using namespace std;

#define pp pop_back
#define pb push_back
#define sz(a) (int) (a).size()
#define szf(a) (int) sizeof(a)

typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> vi;
    while(n--) {
        int x; cin >> x;
        vi.pb(x);
    }
    while(vi.empty() != true) {
        vi.pp();
    }
    printf("%d %d \n", sz(vi), szf(vi));
    return 0;
}
