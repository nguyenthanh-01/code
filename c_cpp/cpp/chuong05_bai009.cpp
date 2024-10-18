#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

#define pb push_back
#define pp pop_back

typedef vector<int> vi;
typedef map<int, int> mp;

int main() {
    int n; cin >> n;
    vi arr(n);
    mp arr_map;

    for(int &i : arr) {
        cin >> i;
        arr_map[i]++;
    }

    for(int i : arr) {
        if(arr_map[i] != 0) {
            cout << i << " " << arr_map[i] << "\n";
            arr_map[i] = 0;
        }
    }

    return 0;
}
