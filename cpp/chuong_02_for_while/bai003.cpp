#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n; cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i%3 == 0) {
      sum += i;
    }
  }
  cout << sum;
  return 0;
}
