#include <iostream>

using namespace std;
using ll = long long;

void tong(int, int &);

int main() {
    int n; cin >> n;
    int s = 0;

    tong(n, s);

    cout << s;

    return 0;
}

void tong(int n, int &s) {
    if(n == 0) {
        return;
    }

    s += n;
    tong(n - 1, s);
}
