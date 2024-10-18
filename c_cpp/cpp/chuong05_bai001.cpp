#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int arr[n];

    for(int &i : arr) {
        cin >> i;
    }

    int k; cin >> k;
    int cnt = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == k) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
