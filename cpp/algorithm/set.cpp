#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define su(a) (a).erase(unique(all(a)), (a).end())
#define sz(a) (int) (a).size()

typedef long long ll;
typedef vector<int> vi;

int main() {
    vi a = {2, 0, 8, 5, 1, 6, 0, 1, 4, 6};
    sort(all(a));
    su(a);
    for (auto &i: a) {
        cout << i << " ";
    }
    return 0;
}
