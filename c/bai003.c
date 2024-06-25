#include <stdio.h>
#include <math.h>

#define max(a, b) (a) > (b) ? (a): (b)
#define min(a, b) (a) < (b) ? (a): (b)
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define range_(i, a, b) for(int i = (a) - 1; i >= (b); i--)

typedef long long ll;

const int mod = (int) 1e9 + 7;
const double pi = acos(-1);
const double eps = 1e-9;

static inline ll gcd(ll a, ll b) {ll r; while(b != 0) {r = a % b; a = b; b = r;} return a;}
static inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
static inline ll isqrt(ll k) {ll r = sqrt(k) + 1; while(r * r > k) r--; return r;}
static inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while(r * r * r > k) r--; return r;}
static inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for(; k != 0; k /= 2) {if(k % 2 != 0) r = r * n % p; n = n * n % p;} return r;}

int main() {
    
    return 0;
}
