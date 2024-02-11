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
    vi.insert(vi.begin() + 3, 0);
    for (int &i: vi) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
