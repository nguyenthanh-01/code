#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define size(a) (int) (a).size()

int main() {
    int n; cin >> n;
    vector<int> vi(n);
    for (int &i: vi) {
        cin >> i;
    }
    while(vi.empty() != true) {
        vi.pp();
    }
    printf("%d \n", size(vi));
    return 0;
}
