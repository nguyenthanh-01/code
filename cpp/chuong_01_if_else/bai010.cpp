#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"

typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    (a > 0 && b > 0 && c > 0 && a+b > c && a+c > b && b+c > a) ? yes : no;
    return 0;
}
