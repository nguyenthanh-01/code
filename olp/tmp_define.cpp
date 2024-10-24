#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define FOR(i, a, b) for(int i = (a), _b = (b); i < _b; i++)
#define REP(i, n) for(int i = 0, _n = (n); i < _n; i++)

const int MOD = (int) 1e9 + 7;
const double PI = acos(-1);

inline bool cmp(int &a, int &b) {return a > b;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    return 0;
}
