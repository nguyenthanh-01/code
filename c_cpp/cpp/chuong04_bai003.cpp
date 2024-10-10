#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;

    int s = n / 2 - (n % 2) * n;

    cout << s;

    return 0;
}
