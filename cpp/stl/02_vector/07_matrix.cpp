#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back

typedef struct {int x; int y;} ii;

int main() {
    vector<ii> vii(3);
    for (auto &i: vii) {
        cin >> i.x >> i.y;
    }
    for (auto &i: vii) {
        printf("(%d, %d) ", i.x, i.y);
    }
    printf("\n");
    return 0;
}
