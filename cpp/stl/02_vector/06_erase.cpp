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
    vi.erase(vi.begin() + 3);
    for (int &i: vi) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
