#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool check_nt(int);

int main() {
    int n; cin >> n;
    
    if(check_nt(n) == true) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}

bool check_nt(int n) {
    if(n < 2) {
        return false;
    }

    if(n == 2) {
        return true;
    }

    if(n%2 == 0) {
        return false;
    }

    int _n = sqrt(n) + 1;

    for(int i = 3; i < _n; i += 2) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}
