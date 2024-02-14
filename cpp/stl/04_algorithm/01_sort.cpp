#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define all(a) (a).begin(), (a).end()

typedef struct {int x; int y;} ii;

inline bool cmp(ii &i, ii &j) {
    if (i.x > j.x) return true;
    else if (i.x == j.x) return i.y > j.y;
    else return false;
}

int main() {
    int n; cin >> n;
    vector<ii> vii(n);
    for (auto &i: vii) {
        cin >> i.x >> i.y;
    }
    sort(all(vii), cmp);
    for (auto &i: vii) {
        printf("(%d, %d) ", i.x, i.y);
    }
    printf("\n");
    return 0;
}
