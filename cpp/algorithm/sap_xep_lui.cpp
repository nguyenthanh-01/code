#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    vi a = {2, 0, 8, 5, 1, 6, 0, 1, 4, 6};
    sort(rall(a));
    for (int &i: a) {
        cout << i << " ";
    }
    return 0;
}
