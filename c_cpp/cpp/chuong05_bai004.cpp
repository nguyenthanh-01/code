#include <iostream>

using namespace std;
using ll = long long;

int ucln(int, int);

int main() {
    int n; cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int tmp = arr[0];

    for(int i = 1; i < n; i++) {
        tmp = ucln(tmp, arr[i]);
    }

    cout << tmp;
    
    return 0;
}

int ucln(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}
