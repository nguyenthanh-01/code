#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define size(a) (int) (a).size()

int main() {
    int n; cin >> n;
    vector<int> vi(n);
    for (int &i: vi) {
        cin >> i;
    }
    for (int i = 0; i < size(vi); i++) {
        printf("%d ", vi[i]);
    }
    printf("\n");
    return 0;
}
