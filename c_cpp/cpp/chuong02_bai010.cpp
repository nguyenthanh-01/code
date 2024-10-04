#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    bool flag = false;

    while(n--) {
        int x; cin >> x;

        if(x == 2022) {
            flag = true;
        }
    }

    if(flag == true) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}
