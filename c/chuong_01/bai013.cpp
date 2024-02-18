#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int nam = n / 365;
    n %= 365;
    int tuan = n / 7;
    n %= 7;
    printf("%d %d %d \n", nam, tuan, n);
    return 0;
}
