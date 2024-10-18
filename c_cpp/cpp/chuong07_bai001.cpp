#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
using ll = long long;

typedef vector<int> vi;

bool check_nt(int);

int main() {
    int n, m;
    cin >> n >> m;

    n = n * m + 1;
    vi arr(n);

    for(int i = 1; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++) {
        if(check_nt(arr[i])) {
            cout << arr[i] << " ";
        }

        if(i%m == 0) {
            cout << "\n";
        }
    }

    return 0;
}

bool check_nt(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    int _n = sqrt(n) + 1;

    for(int i = 3; i < _n; i += 2) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}
