#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n; cin >> n;
  int dem = 0;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n%i == 0) {
      dem++;
      cout << i << " ";
    }
  }
  cout << dem;
  return 0;
}
