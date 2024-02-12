#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back

int main() {
    int n; cin >> n;
    vector<int> vi(n);
    for (int &i: vi) {
        cin >> i;
    }
    for (auto it = vi.begin(); it != vi.end(); it++) {
        printf("%d ", *it);
    }
    printf("\n");
    for (auto it = vi.rbegin(); it != vi.rend(); it++) {
        printf("%d ", *it);
    }
    printf("\n");
    return 0;
}
