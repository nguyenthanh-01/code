#include <bits/stdc++.h>
using namespace std;
                                                           
#define n 5000
#define sz(a) (int) (a).size()
#define pb push_back
#define pp pop_back

int main() {
    vector<int> vi = {1};
    
    for (int i = 1; i <= n; i++) {
        int tmp = 0;
        for (int j = 0; j < sz(vi); j++) {
            int res = vi[j] * i + tmp;
            vi[j] = res % 10;
            tmp = res / 10;
        }
        while (tmp > 0) {
            vi.pb(tmp % 10);
            tmp /= 10;
        }
    }
    
    for (int i = sz(vi)-1; i >= 0; i--) {
        cout << vi[i];
    }
    cout << "\n";
    return 0;
}
