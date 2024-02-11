#include <bits/stdc++.h>
using namespace std;

#define pp pop_back
#define pb push_back

typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> vi;
    while(n--) {
        int x; cin >> x;
        vi.pb(x);
    }
    for (auto it = vi.begin(); it != vi.end(); it++) {
        printf("%d ", *it);
    }
    printf("\n");
    return 0;
}
