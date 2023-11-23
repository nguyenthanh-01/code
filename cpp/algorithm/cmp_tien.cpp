#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

typedef long long ll;
typedef struct {int a, b;} ii;
typedef vector<int> vi;
typedef vector<ii> vii;

inline bool cmp (ii &i, ii &j) {
    if (i.a < j.a) return 1;
    if (i.a == j.a) return (i.b < j.b) ? 1 : 0;
    return 0;
}

int main() {
    vii a = {{3, 0}, {6, 5}, {0, 3}, {1, 3}, {7, 1}, {2, 1}, {7, 7}, {0, 2}, {3, 8}, {7, 4}};
    sort(all(a), cmp);
    for (auto &i: a) {
        cout << "[" << i.a << " " << i.b << "]" << " ";
    }
    return 0;
}
