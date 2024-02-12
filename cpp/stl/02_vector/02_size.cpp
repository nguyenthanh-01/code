#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define size(a) (int) (a).size()

int main() {
    int n; cin >> n;
    vector<int> vi;
    while(n--) {
        int x; cin >> x;
        vi.pb(x);
    }
    for (int i = 0; i < size(vi); i++) {
        printf("%d ", vi[i]);
    }
    printf("\n");
    return 0;
}
