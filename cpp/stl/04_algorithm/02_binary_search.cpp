#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define bn binary_search
#define all(a) (a).begin(), (a).end()

int main() {
    int n; cin >> n;
    vector<int> vi(n);
    for (int &i: vi) {
        cin >> i;
    }
    sort(all(vi));
    for (int &i: vi) {
        printf("%d ", i);
    }
    printf("\n");
    int x; cin >> x;
    if (bn(all(vi), x)) {
        printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}
