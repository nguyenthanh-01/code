#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define pp pop_back

typedef vector<int> vi;

int main() {
    int n, x;
    cin >> n >> x;

    vi arr;

    while(n--) {
        int y; cin >> y;
        arr.pb(y);
    }

    arr.insert(arr.begin() + x, 0);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}
