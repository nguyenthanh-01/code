#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()

using pi = pair<int, int>;
#define fi first
#define se second
#define mp make_pair

#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define FOR(i, a, b) for(int i = (a), _b = (b); i < _b; i++)
#define REP(i, n) for(int i = 0, _n = (n); i < _n; i++)

typedef bool (*func_cmp)(int &, int &);

const int MOD = (int) 1e9 + 7;
const double PI = acos(-1);

inline bool cmp(int &a, int &b) {return a > b;}

void setIO();

int main() {
    setIO();
    return 0;
}

void setIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
