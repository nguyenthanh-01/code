#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> vi;
    while(n--) {
        int x; cin >> x;
        vi.push_back(x);
    }
    for (int &i: vi) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
