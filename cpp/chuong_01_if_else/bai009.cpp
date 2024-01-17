#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"

typedef long long ll;

int main() {
    int n; cin >> n;
    (n%400 == 0 || (n%4 == 0 && n%100 != 0)) ? yes : no;
    return 0;
}
