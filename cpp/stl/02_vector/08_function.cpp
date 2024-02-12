#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define vector vector<int>

void test(vector &vi);

int main() {
    int n; cin >> n;
    vector vi(n);
    test(vi);
    printf("%d \n", vi.back());
    return 0;
}

void test(vector &vi) {
    vi.back() = 1;
}
