#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main() {
    int n; cin >> n;
    vector<int> vi(n);
    for (int &i: vi) {
        cin >> i;
    }
    for (int &i: vi) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
