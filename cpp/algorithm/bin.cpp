#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define lw lower_bound
#define up upper_bound

typedef long long ll;
typedef vector<int> vi;

int main()
{
    vi a = {2, 0, 8, 5, 1, 6, 0, 1, 4, 6 };
    sort(all(a));
    auto i = lw(all(a), 8);
    if (i == a.end()) {
        cout << "NO";
    }
    else {
        cout << i - a.begin();
    }
    return 0;
}
