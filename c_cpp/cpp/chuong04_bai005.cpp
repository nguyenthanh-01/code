#include <iostream>

using namespace std;
using ll = long long;

void fibo(int, int &);

int main() {
    int n; cin >> n;
    int sum = 0;

    fibo(n, sum);

    cout << sum;

    return 0;
}

void fibo(int n, int &sum) {
    if(n == 1) {
        return;
    }

    if(n == 2) {
        sum++;
        return;
    }

    fibo(n - 1, sum);
    fibo(n - 2, sum);
}
