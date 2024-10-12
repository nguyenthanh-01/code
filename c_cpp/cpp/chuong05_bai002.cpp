#include <iostream>
#include <map>

using namespace std;
using ll = long long;

#define fi first
#define se second

typedef pair<int, int> pi;
typedef map<int, int> mp;

int main() {
    int n; cin >> n;
    mp arr;

    while(n--) {
        int x; cin >> x;
        arr[x]++;
    }

    for(pi i : arr) {
        cout << i.fi << " " << i.se << "\n";
    }

    return 0;
}
