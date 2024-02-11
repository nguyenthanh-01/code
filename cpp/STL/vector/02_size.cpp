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
    for (int i = 0; i < sz(vi); i++) {
        printf("%d ", vi[i]);
    }
    printf("\n%d \n", szf(vi));
    return 0;
}

// int
