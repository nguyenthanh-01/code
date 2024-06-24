#include <stdio.h>
#include <math.h>

#define max(a, b) (a) > (b) ? (a): (b)
#define min(a, b) (a) < (b) ? (a): (b)

typedef long long ll;

const double pi = acos(-1);
const double eps = 1e-9;

static inline ll gcd(ll a, ll b) {ll r; while(b != 0) {r = a % b; a = b; b = r;} return a;}
static inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
static inline ll isqrt(ll k) {ll r = sqrt(k) + 1; while(r * r > k) r--; return r;}
static inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while(r * r * r > k) r--; return r;}

int main() {
    
    return 0;
}
