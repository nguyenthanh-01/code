#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool check_nt(int);
bool check_num(int);
bool sum_num(int);

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for(int i = a; i <= b; i++) {
        if(check_num(i) && check_nt(i) && sum_num(i)) {
            cnt++;
        }
    }

    cout << cnt;

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

bool check_num(int n) {
    while(n != 0) {
        int r = n % 10;

        if(r == 2 || r == 3 || r == 5 || r == 7) {
            n /= 10;
        }
        else {
            return false;
        }
    }

    return true;
}

bool sum_num(int n) {
    int sum = 0;

    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return check_nt(sum);
}
