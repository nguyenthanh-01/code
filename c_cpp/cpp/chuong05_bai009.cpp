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

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        int j = arr[i];
        arr_map[j]++;
    }

    for(int i = 0; i < n; i++) {
        int j = arr[i];

        if(arr_map[j] != 0) {
            cout << j << " " << arr_map[j] << "\n";
            arr_map[j] = 0;
        }
    }

    return 0;
}
