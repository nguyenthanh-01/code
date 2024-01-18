#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n; cin >> n;
  double tong = 0;
  for (int i = 1; i <= n; i++) {
    tong += 1.0 / (2 * i);
  }
  cout << tong;
  return 0;
}
